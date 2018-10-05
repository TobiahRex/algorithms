#include <iostream>
#include <vector>
using namespace std;

int SelectionSort(vector<int>, int);
int BubbleSort(vector<int>, int);

int main() {
  vector<int> nums = {
    5658845,
    4520125,
    7895122,
    8777541,
    8451277,
    1302850,
    8080152,
    4562555,
    5552012,
    5050552,
    7825877,
    1250255,
    1005231,
    6545231,
    3852085,
    7576651,
    7881200,
    4581002
  };

  int selection_exchanges = SelectionSort(nums, target);
  cout << "\n\t -- Selection Sort Results -- " << endl
  << "Exchanges: " << selection_exchanges << endl;

  int binary_comparisons = BubbleSort(nums, target);
  cout << "\n\t -- Bubble Sort Results -- " << endl
  << "Exchanges: " << binary_comparisons << endl;

  return 0;
}

int SelectionSort(vector<int> nums, int target) {
  int comparisons{}, lastVal{}, i{0}, size = nums.size();

  for (;lastVal != target && i < size; i++) {
    comparisons += 1;
    lastVal = nums[i];
  }

  bool found{false};
  if (lastVal == target) found = true;

  found == true ?
    cout << "\nLinear Search found Value at position " << i << endl :
    cout << "\nLinear Search did NOT find value" << endl;

  return comparisons;
}

int BubbleSort(vector<int> nums, int target) {
  int comparisons{},
    first{0},
    last = nums.size() - 1,
    position{-1},
    middle{};

  bool found{false};
  while (!found && first <= last) {
    comparisons += 1;
    middle = (first + last) / 2;

    if (target == nums[middle]) {
      position = middle;
      found = true;
    } else if (target < nums[middle]) {
      last = middle - 1;
    } else {
      first = middle + 1;
    }
  }

  found == true ?
    cout << "\nBinary Search found Value at position " << position + 1 << endl :
    cout << "\nBinary Search did NOT find value" << endl;

  return comparisons;
}
