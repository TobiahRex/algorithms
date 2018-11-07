#include <iostream>
#include <vector>
using namespace std;

// void swap(int &a, int &b);
// int partition(vector<int> &arr, int lo, int hi);
// void quickSort(vector<int> &arr);


void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int partition(vector<int> &arr, int lo, int hi) {
  int iPartition = hi;
  int iNext = lo;

  while(true) {
    if(arr[iNext] > arr[iPartition]) {
      swap(arr[iNext], arr[iPartition - 1]);
      swap(arr[iPartition - 1], arr[iPartition]);
      iPartition--;
    } else if (iNext == iPartition) break;
    else iNext++;
  }
  return iPartition;
}

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
  vector<int> nums = {3,6,7,8,5,2,1,9,0};
  quickSort(nums);

  for (int num : nums) cout << " " << num;
  cout << endl;

  return 0;
}
