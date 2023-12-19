/* aproximação de π usando a fórmula de Gregory-Leibniz.*/
#include <bits/stdc++.h>

using namespace std;
using namespace chrono;
typedef long long ll;

double calc_pi(ll iters) {
  float soma = 0;
  int sinal = 1;
  float termo;
  for (ll i = 1; i < iters * 2; i += 2) {
    termo = 1.0 / i * sinal;
    soma += termo;
    sinal *= -1;
  }

  return 4 * soma;
}

double calc_pi_rec(ll iters, int sinal = 1, int numerador = 1) {
  if (iters == 0)
    return 0.0;

  double termo = 1.0 / numerador * sinal;

  return termo + calc_pi_rec(iters - 1, sinal * -1, numerador + 2);
}

int main(int argc, char *argv[]) {
  ll n_iters = strtol(argv[1], NULL, 10);
  if (argc < 2) {
    cout << "missed arg" << endl;
    exit(1);
  }
  auto start_iterativo = high_resolution_clock::now();
  double result = calc_pi(n_iters);
  auto end_iterativo = high_resolution_clock::now();

  cout << "Aprox. de PI com " << n_iters << " termos: " << result << endl;

  auto start_iterativo_recursivo = high_resolution_clock::now();
  double result_r = 4 * calc_pi_rec(n_iters);
  auto end_recursivo = high_resolution_clock::now();

  cout << "Aprox. de PI com " << n_iters << " termos: " << result_r << endl;

  cout << "Elapsed time função iterativa: "
       << duration_cast<milliseconds>(end_iterativo - start_iterativo).count()
       << " ms" << endl;
  cout << "Elapsed time função recursiva: "
       << duration_cast<milliseconds>(end_recursivo - start_iterativo_recursivo)
              .count()
       << " ms" << endl;

  return 0;
}