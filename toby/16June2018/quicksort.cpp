#include <iostream>
#include <vector>
using namespace std;

void swap(int & a, int &b);
void quickSort(vector<int> &arr, int lo, int hi);
int partition(vector<int> &arr, int lo, int hi);

int main() {
  vector<int> nums = {3,4,5,1,2,7,9,8,6};
  quickSort(nums);

  return 0;
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

int partition(vector<int> &arr, int lo, int hi) {
  int iPartition = hi;
  int iCurrent = lo;

  if (arr[iCurrent] > arr[iPartition]) {
    swap(arr[iCurrent], arr[iPartition - 1]);
    swap(arr[iPartition - 1], arr[iPartition]);
    iPartition--;
  } else if (iPartition == iCurrent) break;
  else iCurrent++;
}

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}
