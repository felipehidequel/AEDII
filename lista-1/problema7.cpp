#include <bits/stdc++.h>

using namespace std;

void print_ast(int n)
{
    if (n == 0)
        return;

    cout << "*";
    print_ast(n - 1);
}

int main(int argc, char *argv[])
{
    if (argc < 6)
    {
        cerr << "Informe 5 valores como argumento" << endl;
        exit(1);
    }

    int n[5];
    for (int i = 0; i < 5; i++)
    {
        n[i] = strtol(argv[i + 1], NULL, 10);
        if (n[i] < 1 || n[i] > 30){
            cerr << "Informe valores no intervalo de 1-30" << endl;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        print_ast(n[i]);
        cout << endl;
    }
    return 0;
}