#include <bits/stdc++.h>

using namespace std;

float price_prod(char tipo, int qtd)
{

    switch (tipo)
    {
    case '1':
        return qtd * 3.00;
        break;
    case '2':
        return qtd * 4.00;
        break;
    case '3':
        return qtd * 2.80;
        break;
    case '4':
        return qtd * 1.95;
        break;
    case '5':
        return qtd * 5.00;
        break;

    default:
        cerr << "informe o numero de produto no intervalo de 1-5" << endl;
        exit(1);
        break;
    }
}

int main(int argc, char *argv[])
{
    char tipo;
    int qtd_vend;
    float total = 0;

    char escolha;
    do
    {
        cin >> tipo >> qtd_vend;
        total += price_prod(tipo, qtd_vend);
        cout << "Deseja continuar? (s/S para sim, qualquer outra tecla para não)" << endl;
        cin >> escolha;
    } while (escolha == 's' || escolha == 'S');

    cout << "Valor de varejo: R$ " << total << endl;
    return 0;
}