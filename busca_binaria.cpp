#include <bits/stdc++.h>

using namespace std;
// busca binaria adaptada para vetor de inteiros
int busca_bin(int l[], int x, int n)
{
    int inf = 1, sup = n - 1; // inicializa limites inferior e superior
    while (inf <= sup)
    {
        int meio = (inf + sup) / 2;

        if (l[meio] == x)
            return meio; // valor encontrado
        else if (l[meio] < x)
            inf = meio+1; // ajusta limite inferior
        else
            sup = meio -1; // ajusta limite superior

        return -1; // valor não encontrado
    }
}