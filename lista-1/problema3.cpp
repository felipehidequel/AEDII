#include <bits/stdc++.h>

using namespace std;
void multiplos7(int *x) {
  if (*x > 100) {
    return;
  }

  if (*x % 7 == 0)
    cout << *x << endl;
  *x = *x + 1;
  multiplos7(x);
}

int main() {
  int x = 1;
  multiplos7(&x);

  return 0;
}