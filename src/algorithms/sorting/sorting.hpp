#pragma once

#include <vector>

namespace algorithms::sorting {
void bubble_sort(std::vector<int>& arr);
void selection_sort(std::vector<int>& arr);
void insertion_sort(std::vector<int>& arr);
void merge_sort(std::vector<int>& arr);

enum class SortingAlgorithm { BUBBLE_SORT, SELECTION_SORT, INSERTION_SORT, MERGE_SORT };

/**
 * @brief Time complexity of the sorting algorithm
 *
 */
enum class SortingTimeComplexity {
  CONSTANT,            // O(1)
  LOGARITHMIC,         // O(log n)
  LINEAR,              // O(n)
  LINEAR_LOGARITHMIC,  // O(n log n)
  QUADRATIC,           // O(n^2)
  CUBIC,               // O(n^3)
  EXPONENTIAL,         // O(2^n)
  FACTORIAL,           // O(n!)
};

SortingTimeComplexity get_sorting_time_complexity(SortingAlgorithm algorithm);

/**
 * @brief Space complexity of the sorting algorithm
 *
 */
enum class SortingSpaceComplexity { O_1, O_N, O_N_LOG_N };

struct SortingAlgorithmInfo {
  SortingAlgorithm       algorithm;
  SortingTimeComplexity  time_complexity;
  SortingSpaceComplexity space_complexity;
};
}  // namespace algorithms::sorting