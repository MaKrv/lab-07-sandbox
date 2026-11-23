#include <iostream>
#include <vector>

void min_max(const int *a, int n, int &mn, int &mx) {
  mn = a[0];
  mx = a[0];

  for (int i = 1; i < n; ++i) {
    if (a[i] < mn) {
      mn = a[i];
    }

    if (a[i] > mx) {
      mx = a[i];
    }
  }
}

int main() {
  int n;

  std::cout << "Enter number of elements (1-100): ";
  if (!(std::cin >> n) || n < 1 || n > 100) {
    std::cout << "Error: number of elements must be between 1 and 100.\n";
    return 1;
  }

  std::vector<int> numbers(n);

  std::cout << "Enter " << n << " integers: ";
  for (int i = 0; i < n; ++i) {
    if (!(std::cin >> numbers[i])) {
      std::cout << "Error: invalid integer.\n";
      return 1;
    }
  }

  int mn, mx;

  min_max(numbers.data(), n, mn, mx);

  std::cout << mn << " " << mx << '\n';

  return 0;
}
