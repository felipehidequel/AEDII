/*
Um exemplo conhecido, onde a solução recursiva é natural e intuitiva, é o do Problema da Torre de Hanói.
Este consiste em três pinos, A, B e C, denominados origem, destino e trabalho, respectivamente, e n discos
de diâmetros diferentes. Inicialmente, todos os discos se encontram empilhados no pino-origem, em ordem decrescente
de tamanho, de baixo para cima. O objetivo é empilhar todos os discos no pino-destino, atendendo às seguintes restrições:
(i) apenas um disco pode ser movido de cada vez, e (ii) qualquer disco não pode ser jamais colocado sobre outro de tamanho menor.
*/
#include <bits/stdc++.h>

using namespace std;

/*Resolve o quebra cabeça de hanoi
**@param n : numero de discos
**@param a : pino origem
**@param b : pino de destino
**@param c : pino auxiliar
*/
void hanoi(int n, char a, char b, char c)
{
    // Caso base: se n for 0, não há discos a serem movidos, finalizando a recursão
    if (n > 0)
    {
        // passo 1: mover n-1 discos de 'a' para 'c', usando 'b' como pino auxiliar
        hanoi(n - 1, a, c, b);
        // passo 2: mover o disco do topo de 'a' para 'b' 
        cout << "mover o disco do topo de " << a << " para " << b << endl;
        // passo 3: mover os n-1 discos restantes de 'c' para 'b', usando 'a' como auxilio
        hanoi(n - 1, c, b, a);
    }
}

int main(){
    int n; cin>>n; // ler numero de discos
    hanoi(n,'A','B','C');

    return 0;
}