// Autor: Felipe Hidequel
// Defina uma função recursiva que, dado os valores inteiros de
// x1 e x2, determine y = x1x2
#include <iostream>

int produto(int x1, int x2) {
  if (x2 == 1)
    return x1;

  return x1 + produto(x1, x2 - 1);
}

int main() {
  std::cout << produto(2, 3) << "\n";
  std::cout << produto(3, 3) << "\n";
  return 0;
}