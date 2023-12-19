#include <bits/stdc++.h>

using namespace std;

void to_ascii(int n = 0) {
  if (n >= 127)
    return;

  cout << static_cast<char>(n) << " ";

  if ((n + 1) % 10 == 0)
    cout << endl;

  to_ascii(n + 1);
}

int main() {
  to_ascii();
  cout << endl;
  return 0;
}