#include <bits/stdc++.h>

using namespace std;

string int_to_roman(int n) {
  string result = "";
  int values[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
  const char *numerals[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

  for (int i = 0; i < 9; ++i) {
    while (n >= values[i]) {
      result += numerals[i];
      n -= values[i];
    }
  }
  return result;
}

void print_roman_table() {
  cout << "-------------------------|" << endl;
  for (int i = 1; i <= 100; ++i)
    cout << setw(10) << i << setw(7) << "|" << setw(7) << int_to_roman(i)
         << endl;
  cout << "-------------------------|" << endl;
}

int main(int argc, char *argv[]) {

  print_roman_table();
  return 0;
}