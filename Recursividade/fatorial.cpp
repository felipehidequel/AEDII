#include <bits/stdc++.h>

using namespace std;
/*Função para calcular fatorial utilizando recursividade
**@param i : fatorial a ser calculado
*/
int fat(int i){
    if (i<=1) return 1; // caso base

    else return i*fat(i-1);
}

int main(){
    int i; cin >> i;
    
    cout << "Fatorial de " << i << ": " << fat(i) << endl;
    return 0;
}