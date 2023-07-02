#include <iostream>
#include <vector>
#include <set>

int main(){
  int n; std::cin >> n;
  std::vector<int> arr(n);
  std::set<int> unique_elements;
  for(int i = 0; i < n; i++){
    std::cin >> arr[i];
    if (! unique_elements.count(arr[i])){
      unique_elements.insert(arr[i]);
    }
  }
  std::cout << static_cast<int> (unique_elements.size()) << std::endl;
  return 0;
}