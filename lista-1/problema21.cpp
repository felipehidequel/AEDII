/*
    21 Escreva funções recursivas para calcular:
    a) Máximo Divisor Comum entre dois número inteiros;
    b) Fatorial de um número natural;
    c) A série de fibonacci (1, 1, 2, 3, 5..., a, b,(a + b). . .);
    d) isPrime(n): Verificador recursivo se n é um número natural primo
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int fibonacci(int n = 1) {
  if (n <= 1)
    return n;
  else {
    cout << n << " ";
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

/*Maximo divisor comum entre dois numeros inteiros*/
int calc_mdc(int num1, int num2) {
  if (num2 == 0)
    return num1;

  int aux = num2;
  num2 = num1 % num2;
  return calc_mdc(aux, num2);
}

/*Fatoral de n*/
ll fatorial(int n) {
  if (n == 1)
    return 1;

  return n * fatorial(n - 1);
}

/*Verificação recursiva se n é um número natural primo*/
bool primo(int num, int i = 2) {
  if (num <= 1)
    return false;

  if (i <= num / 2) {
    if (num % i == 0)
      return false;
    else
      return primo(num, i + 1);
  }

  return true;
}

int main() {
  cout << fatorial(10) << endl;
  cout << calc_mdc(15, 72) << endl;
  fibonacci(10);
  return 0;
}