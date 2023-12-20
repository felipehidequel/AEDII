/*D
Problema 18 Um número inteiro é considerado um número perfeito se seus
fatores, incluindo 1 (mas não o próprio número), somam o número. Por
exemplo, 6 é um número perfeito porque 6 = 1 + 2 + 3. Escreva uma função
isPerfcct, que determina sc o número do parâmetro é um número perfeito.
perfeitos entre 1 e 1000 e Imprima os fatores dc cada número perfeito para
confirmar quc o número é rcalmcnt,e perfeito;F
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPerfect(int n) {
  list<int> fatores;
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      fatores.emplace_front(i);
    }
  }
  ll sum = 0;
  for (auto &fator : fatores)
    sum += fator;

  if (sum == n) {
    cout << n << " is perfect!" << endl;
    cout << n << " factors: " << endl;
    for (auto &fator : fatores)
      cout << fator << "\t";
    cout << endl;
    return true;
  }
  return false;
}

int main() {
  for (int i = 1; i <= 1000; i++)
    isPerfect(i);

  return 0;
}