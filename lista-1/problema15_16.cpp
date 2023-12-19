/*
    Escreva uma função que exibe um retângulo sólido de asteriscos cujos lados
    são especificados nos parâmetros inteiros lado1 e lado2. Por exemplo, se os
    lados são 4 e 5, a função exibe o seguinte:
        ****
        ****
        ****
        ****
*/
#include <bits/stdc++.h>

using namespace std;

void print_rectangle(int lado1, int lado2, char c = '*');

int main() {
  //   int l1, l2;
  //   cin >> l1 >> l2;
  print_rectangle(2, 10, 'f');
  print_rectangle(2, 3, 'f');
  print_rectangle(2, 6, 'f');
  print_rectangle(2, 3, 'f');
  print_rectangle(2, 3, 'f');
  cout << endl;
  print_rectangle(2, 10, 'e');
  print_rectangle(2, 3, 'e');
  print_rectangle(2, 6, 'e');
  print_rectangle(2, 3, 'e');
  print_rectangle(2, 10, 'e');

  return 0;
}

void print_rectangle(int lado1, int lado2, char c) {
  for (int i = 0; i < lado1; i++) {
    for (int j = 0; j < lado2; j++) {
      cout << c;
    }
    cout << endl;
  }
}
