/*
    Escreva uma função que considere o tempo como três argumentos inteiros
    (para horas, minutos e segundos) e retorne o número de segundos desde a
    ultima vez que o relógio bateu 12. Use esta função para calcuar a
    quantidade de tempo em segundos entre dois tempos, amnbos dentro de um
    ciclo de 12 horas do relógio.
*/
#include <bits/stdc++.h>

using namespace std;

const long long doze = 12 * 60 * 60;

typedef long long ll;

double qtd_seconds(int hh, int mm, int ss) {
  long long hour_to_second = hh * 60 * 60;
  long long minute_to_second = mm * 60;
  long long total_seconds = hour_to_second + minute_to_second + ss;

  return doze - total_seconds;
}

int main() {
  int h, m, s;
  cout << "Informe o primeiro tempo (hh mmm ss)" << endl;
  cin >> h >> m >> s;
  ll first_time = qtd_seconds(h, m, s);
  cout << "Informe o segundo tempo (hh mmm ss)" << endl;
  cin >> h >> m >> s;
  ll second_time = qtd_seconds(h, m, s);

  cout << "A diferença entre os dois tempos: " << second_time - first_time
       << "s" << endl;

  return 0;
}