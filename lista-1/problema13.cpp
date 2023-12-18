#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define ANO 365
#define DIAS 738231

int main (){
    int dia, mes, ano;
    ll sum_days;
    string meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho"
    , "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    dia = 02;
    mes = 3;
    ano = 2001;
    cout << dia << " de " << meses[mes-1] << " de " << ano << endl;

    int ano_bissexto = 0;

    for (int i = 0; i < ano; i++){
        if ((i%4 == 0 || i%400 == 0) && i%100 != 0)
            ano_bissexto++;
    }
    int qtd_dias = DIAS - (((ano - ano_bissexto) * ANO) + ano_bissexto * 366);

    string semana[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"
    , "Saturday", "Sunday"};

    cout << semana[qtd_dias%7+1] << endl;

}