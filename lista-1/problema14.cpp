/*
Defina Uma função chamada hipotenusa que calcula o comprimento da hipotenusa
de um triângulo retângulo quando o outros dois lados são dados.
*/

#include <bits/stdc++.h>

using namespace std;

double hipotenusa(float lado1, float lado2);

int main() {
  double c = hipotenusa(16.5, 16.5);
  cout << c << endl;
  return 0;
}

double hipotenusa(float lado1, float lado2) {
  double c = pow(lado1, 2) + pow(lado2, 2);
  return sqrt(c);
}
