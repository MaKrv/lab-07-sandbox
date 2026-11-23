
#include <iostream>

void hanoi(int n, char from, char to, char via) {
  if (n == 0) {
    return;
  }

  hanoi(n - 1, from, via, to);

  std::cout << from << " -> " << to << '\n';

  hanoi(n - 1, via, to, from);
}

int main() {
  int n;

  std::cout << "Enter number of disks (1-10): ";

  if (!(std::cin >> n) || n < 1 || n > 10) {
    std::cout << "Error: number of disks must be between 1 and 10.\n";
    return 1;
  }

  hanoi(n, 'A', 'C', 'B');

  return 0;
}