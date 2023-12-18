#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int zeller_day(int dd, int mm, int yy){
       if (mm < 3) {
        mm += 12;
        yy--;
    }
    
    return (dd + ((13*(mm+1))/5)+yy+(yy/4)-(yy/100)+(yy/400))%7;
}

int main (){
    int dia, mes, ano;
    string meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho"
    , "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    cin>> dia >> mes >> ano;
    cout << dia << " de " << meses[mes-1] << " de " << ano << endl;

    int h = zeller_day(dia, mes, ano);
    string semana[] = {"Saturday", "Sunday","Monday", "Tuesday"
    , "Wednesday", "Thursday", "Friday"};

    cout << semana[h] << endl;

}