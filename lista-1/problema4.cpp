#include <bits/stdc++.h>

using namespace std;

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
  for (int i = 1; i < 100; i++) {
    if (primo(i))
      cout << i << endl;
  }

  return 0;
}