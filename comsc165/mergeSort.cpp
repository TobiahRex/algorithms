#include <iostream>
#include <vector>
using namespace std;

void _merge(vector<int> &nums, int l, int m, int r);
void mergeSort(vector<int> &nums, int l, int r);

int main() {
  vector<int> nums = {3,6,4,7,8,1,2,0,9,5};

  mergeSort(nums);
  // for(auto n: nums) cout << " " << n;

  return 0;
}

void mergeSort(vector<int> &nums, int left = 0, int right = 0) {
  if (left == 0 && right == 0) {
    right = nums.size() - 1;
  }

  int mid = (left + right) / 2;

  if (left < right) {
    mergeSort(nums, left, mid);
    mergeSort(nums, mid + 1, right);
    _merge(nums, left, mid, right);
  }
}

void _merge(vector<int> &nums, int l, int m, int r) {
  vector<int> tempArray(right - left + 1);
  int pos = 0,
    lpos = left,
    rpos = mid + 1;

  while(lpos <= mid && rpos <= right) {
    if (nums[lpos] < nums[rpos]) {
      tempArray[pos++] = nums[lpos++];
    } else {
      tempArray[pos++] = array[rpos++];
    }
  }

  while(lpos <= mid) tempArray[pos++] = array[lpos++];
  while(rpos <= right) tempArray[pos++] = array[rpos++];

  for (int i = 0; i < pos, i++) {
    array[i + left] = tempArray[i];
  }
  return;
}
