/*
    Escreva um programa que inverta recursivamente a ordem de um numero
*/
#include <bits/stdc++.h>
#include <memory>

int num_digits(int n) {
  int aux, contador = 0, base = 10;
  while (aux != n) {
    aux = n % base;
    contador++;
    base *= 10;
  }
  return contador;
}

int invert_digit(int num, int invert = 0) {
  if (num == 0)
    return invert;

  return invert_digit(num / 10, invert * 10 + num % 10);
}

int main() {
  int n;
  std::cin >> n;

  std::cout << invert_digit(n) << "\n";
  return 0;
}