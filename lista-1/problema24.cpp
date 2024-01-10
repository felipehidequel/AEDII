#include <iostream>

int somatorio(int n) {
  if (n == 0)
    return n;

  return n + somatorio(n - 1);
}

int main() {
  int n;
  std::cin >> n;
  std::cout << somatorio(n) << "\n";

  return 0;
}