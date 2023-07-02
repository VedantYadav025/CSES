#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

/*
  4,3,5
  desired sizes => 45, 60, 60, 80 (sorted the vector)
  apartment sizes => 55, 65, 85 (sorted the vector)
*/

int main() {
  long long int n, m, k;
  std::cin >> n >> m >> k;
  std::vector<long long int> desired_sizes(n);
  std::vector<long long int> apartment_sizes(m);

  for (long long int i = 0; i < n; i++) {
    std::cin >> desired_sizes[i];
  }
  for (long long int j = 0; j < m; j++) {
    std::cin >> apartment_sizes[j];
  }
  std::sort(desired_sizes.begin(), desired_sizes.end());
  std::sort(apartment_sizes.begin(), apartment_sizes.end());
  long long int ans = 0;
  int i = 0;
  int j = 0;
  while (i < n && j < m) {
    if (std::abs(apartment_sizes[j] - desired_sizes[i]) <= k) {
      ans++;
      i++;
      j++;
    } else {
      if (desired_sizes[i] < apartment_sizes[j]) {
        i++;
      } else {
        j++;
      }
    }
  }
  std::cout << ans << std::endl;
  return 0;
}