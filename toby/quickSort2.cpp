#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int> &arr, int lo = -1, int hi = -2) {
  if (lo == -1 && hi == -2) {
    lo = 0;
    hi = arr.size() - 1;
  }
  if (lo > hi || lo == hi) return;

  int p = partition(arr, lo, hi);
  quickSort(arr, lo, p - 1);
  quickSort(arr, p + 1, hi);
}

int main() {
  int nums = {3, 1, 5, 9, 8, 6, 4};
  quickSort(nums);

  for (int num : nums) cout << " " << num;
  cout << endl;

  return 0;
}
