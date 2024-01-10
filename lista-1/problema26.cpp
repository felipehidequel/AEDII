#include <iostream>

int ackerman(int m, int n) {
  if (m == 0)
    return n + 1;

  if (n == 0)
    return ackerman(m - 1, 1);

  return ackerman(m - 1, ackerman(m, n - 1));
}

int main(){
    std::cout<< ackerman(3,0) << "\n";
    return 0;
}