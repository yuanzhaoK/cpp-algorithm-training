#include <iostream>
#include <vector>

#include "algorithms/sorting/sorting.hpp"

int main() {
  // 测试排序算法
  std::vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};
  std::cout << "\n排序前: ";
  for (int num : numbers) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  algorithms::sorting::bubble_sort(numbers);
  std::cout << "\n排序后: ";
  for (const auto& i : numbers) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}