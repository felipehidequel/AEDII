#include <bits/stdc++.h>

using namespace std;

long long fat(int n) {
  if (n == 1)
    return 1;

  return n * fat(n - 1);
}

void print_fat(int n) {
  for (long long i = 1; i <= n; ++i) {

    long long result = fat(i);
    cout << "\n\t" << i << "\t" << result;
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;

  print_fat(n);

  return 0;
}