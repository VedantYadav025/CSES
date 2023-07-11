#include <iostream>
typedef int64_t ll;

int power_of_5(ll n) {
  int power = 0;
  while (n % 5 == 0) {
    n = n / 5;
    power++;
  }
  return power;
}

int main() {
  ll n;
  std::cin >> n;
  ll counter = 0;
  for (ll i = 5; i <= n; i+=5) {
    counter += power_of_5(i);
  }
  std::cout << counter << "\n";
  return 0;
}
