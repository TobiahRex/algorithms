#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int> &v, int i1, int i2);
void partition(vector<int> &v, int, int);
void quickSort(vector<int> &v, int, int);

int main() {
  vector<int> nums = {3,5,9,7,5,2,0,1,4,6};
  quickSort(nums);

  for(auto n : nums) cout << n << " ";

  return 0;
}

void swap(vector<int> & v, int i1, int i2) {
  int temp = v[i1];
  v[i1] = v[i2];
  v[i2] = temp;
}

void 
