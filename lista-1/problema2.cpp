#include <bits/stdc++.h>

using namespace std;

float celsiu = 30;
void converte() {
  if (celsiu > 50)
    return;

  float fahrenheit = celsiu + 32;
  cout << celsiu << "°C - " << fahrenheit << "°F" << endl;
  celsiu++;
  converte();
}

int main(void) {
  converte();
  return 0;
}