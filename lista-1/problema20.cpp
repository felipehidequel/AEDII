/*
    Escreva uma função que receba um valor inteiro e retorne a soma dos seus
    digitos.
*/

#include <bits/stdc++.h>

using namespace std;

int sum_digits(int num);

int main() {
  int n;

  cout << "Informe um valor: " << endl;
  cin >> n;
  cout << "A soma dos digitos de " << n << ": " << sum_digits(n) << endl;
  return 0;
}

int sum_digits(int num) {
  int sum = 0;

  while (num != 0) {
    sum += num % 10;

    num /= 10;
  }

  return sum;
}
