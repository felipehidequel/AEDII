#include <bits/stdc++.h>

using namespace std;

void media(int n, float *resultado)
{

    int qtd_numeros = n;
    int x;
    if (n == 0)
        return;
    cin >> x;
    *resultado += x;
    media(n - 1, resultado);
}

int main()
{

    int n = 0;
    float resultado=0;
    while (n == 0)
    {
        cin >> n;
        if (n == 0)
            cout << "N not must be zero!" << endl;
    }

    media(n, &resultado);
    resultado = resultado/n;
    cout << resultado << endl;

    return 0;
}
