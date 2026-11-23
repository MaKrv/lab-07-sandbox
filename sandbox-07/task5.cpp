#include <iostream>

void print_binary(int n) {
  if (n < 2) {
    std::cout << n;
    return;
  }

  print_binary(n / 2);
  std::cout << n % 2;
}

int main() {
  int a, b, c;

  std::cout << "Enter three non-negative integers: ";

  if (!(std::cin >> a >> b >> c) || a < 0 || b < 0 || c < 0) {
    std::cout << "Error: enter three non-negative integers.\n";
    return 1;
  }

  print_binary(a);
  std::cout << '\n';

  print_binary(b);
  std::cout << '\n';

  print_binary(c);
  std::cout << '\n';

  return 0;
}
