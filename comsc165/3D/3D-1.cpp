#include <iostream>
#include <vector>
using namespace std;

int LinearSearch(vector<int>, int);
int BinarySearch(vector<int>, int);

int main() {
  vector<int> nums = {101, 142, 147, 189, 199, 207, 222, 234, 289, 296, 310, 319, 388, 394, 417, 429, 447, 521, 536, 600};
  int target{};

  bool invalid{true};
  while(invalid) {
    cout << "Enter target value to search for: ";
    cin >> target;
    if (target < 0 || cin.fail() || cin.bad()) {
      cout << "\n\t\t ERROR \nTarget value must be greater than 0\n" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
      invalid = false;
    }
  }

  int linear_comparisons = LinearSearch(nums, target);
  cout << "Comparisons: " << linear_comparisons << endl;

  int binary_comparisons = BinarySearch(nums, target);
  cout << "Comparisons: " << binary_comparisons << endl;

  return 0;
}

int LinearSearch(vector<int> nums, int target) {
  cout << "\n\t -- Linear Search Results -- " << endl;
  int comparisons{}, lastVal{}, i{0}, size = nums.size();

  for (;lastVal != target && i < size; i++) {
    // cout << i << " ";
    comparisons += 1;
    lastVal = nums[i];
  }

  bool found{false};
  if (lastVal == target) found = true;

  found == true ?
    cout << "\nLinear Search found Value at position " << i + 1 << endl :
    cout << "\nLinear Search did NOT find value" << endl;

  return comparisons;
}

int BinarySearch(vector<int> nums, int target) {
  int comparisons{},
    first{},
    last = nums.size() - 1,
    position{-1},
    middle{};

  bool found{false};

  while (!found && first <= last) {
    comparisons += 1;
    middle = nums[first - last] / 2;
    cout << middle << endl;

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
    cout << "\nBinary Search found Value at position " << position << endl :
    cout << "\nBinary Search did NOT find value" << endl;

  return comparisons;
}
