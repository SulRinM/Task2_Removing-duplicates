#include <algorithm>
#include <iostream>
#include <vector>

int main() {

  int size = 0;
  int value = 0;
  std::vector<int> v;

  std::cout << "[IN]: " << std::endl;
  std::cin >> size;
  while (true) {
    static int count = 0;
    std::cin >> value;
    v.push_back(value);
    count++;
    if (count >= size)
      break;
  }
  std::sort(v.begin(), v.end());
  std::cout << "[OUT]: " << std::endl;
  std::vector<int>::iterator it;
  for (it = v.end() - 1; it >= v.begin(); it--) {
    std::cout << *it << std::endl;
  }

  return 0;
}