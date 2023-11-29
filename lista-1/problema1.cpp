#include <bits/stdc++.h>

using namespace std;

/*@param
n : numero de valores
resultado : ponteiro que armazena o resultado da somatoria
*/
void media(int n, float *resultado)
{
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
