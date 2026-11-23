#include <iostream>

int digit_sum(int n) {
  if (n < 10) {
    return n;
  }

  return n % 10 + digit_sum(n / 10);
}

int main() {
  int a, b;

  std::cout << "Enter two non-negative integers: ";

  if (!(std::cin >> a >> b) || a < 0 || b < 0) {
    std::cout << "Error: enter two non-negative integers.\n";
    return 1;
  }

  std::cout << digit_sum(a) << " " << digit_sum(b) << '\n';

  return 0;
}
