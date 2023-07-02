#include <algorithm>
#include <iostream>
#include <vector>

typedef int64_t ll;

int main() {
  ll n, max_weight;
  std::cin >> n >> max_weight;
  std::vector<ll> weights(n);
  for (ll i = 0; i < n; i++) {
    std::cin >> weights[i];
  }
  ll n_gondolas = 0;
  std::sort(weights.begin(), weights.end());
  int i = 0;
  int j = n - 1;
  while (j >= i) {
    if (i == j) {
      n_gondolas++;
      break;
    }
    int sum = weights[j] + weights[i];
    while (sum <= max_weight) {
      sum += weights[i + 1];
      i++;
      // should have just used if
      break;
    }
    n_gondolas++;
    j--;
  }
  std::cout << n_gondolas << std::endl;
  return 0;
}