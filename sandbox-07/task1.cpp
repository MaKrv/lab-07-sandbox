#include <iostream>

int main() {
  const long long limit = 2147483647;
  long long factorial = 1;
  int n = 1;

  while (factorial * (n + 1) <= limit) {
    ++n;
    factorial *= n;
  }

  std::cout << n << '\n';

  return 0;
}