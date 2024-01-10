#include <iostream>

double f(float m, float n) {
  if (m == 1)
    return n + 1;

  if (n == 1)
    return m + 1;

  return f(m - 1, n) + f(m, n - 1);
}

int main() {
  std::cout << f(5, 6) << "\n";
  return 0;
}