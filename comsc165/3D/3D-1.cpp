#include <iostream>
#include <vector>
#include <limit>
using namespace std;

int LinearSearch(vector<int>, int);
// int BinarySearch(vector<int>, int);

int main() {
  vector<int> nums = {101, 142, 147, 189, 199, 207, 222, 234, 289, 296, 310, 319, 388, 394, 417, 429, 447, 521, 536, 600};

  cout << "Enter value to search for: ";
  int target{};
  cin >> target;

  bool invalid{true};
  while(invalid) {
    if (target < 0 || cin.fail() || cin.bad()) {
      cout << "Target value must be greater than 0";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
  }

  int linear_comparisons = LinearSearch(nums, target);
  // int binary_comparisons = LinearSearch(nums, findNum);

  cout << "\t\t -- Linear Search Results -- " << endl
  << "Comparisons: " << linear_comparisons << endl;
  // << "\t\t -- Binary Search Results -- " << endl
  // << "Comparisons: " << binary_comparisons << endl;

  return 0;
}

int LinearSearch(vector<int> nums, int target) {
  int comparisons{}, position{}, lastVal{}, size = nums.size();

  for (int i = 0; nums[i] != target; i++) {
    comparisons += 1;
    position = i;
    lastVal = nums[i];
  }

  bool found{false};
  if (nums[i] == target) found = true;


  found == true ?
    cout << "Linear Search found Value at index " << position << endl :
    cout << "Linear Search did NOT find value" << endl;

  return comparisons;
}

// int BinarySearch(vector<int> nums, int target) {
//   int comparisons{}, size = nums.size();
//
//
// }
