#include "sorting.hpp"

void algorithms::sorting::bubble_sort(std::vector<int>& arr) {
  for (size_t i = 0; i < arr.size(); ++i) {
    for (size_t j = i + 1; j < arr.size(); ++j) {
      if (arr[i] > arr[j]) {
        std::swap(arr[i], arr[j]);
      }
    }
  }
}