#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int SelectionSort(vector<int>);
int BubbleSort(vector<int>);

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
  vector<int> selection = nums;
  vector<int> bubble = nums;

  cout << "\n\t -- Selection Sort Results -- " << endl;
  int selection_exchanges = SelectionSort(selection);
  cout << "Exchanges: " << selection_exchanges << endl;

  cout << "\n\t -- Bubble Sort Results -- " << endl;
  int bubble_exchanges = BubbleSort(bubble);
  cout << "Exchanges: " << bubble_exchanges << endl;

  return 0;
}

int SelectionSort(vector<int> arr) {
  vector<int> temp = arr;

  int exchanges{}, size = arr.size();

  for (int i{0}; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] > arr[j]) {
        exchanges += 1;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  return exchanges;
}

int BubbleSort(vector<int> arr) {
  int exchanges{},
    size = arr.size();

  for(int j{0}; j < size; j++) {
    int divide = 0;
    for (int i{1}; i < size; i++) {
      if (arr[divide] > arr[i]) {
        exchanges += 1;
        int temp = arr[i];
        arr[i] = arr[divide];
        arr[divide] = temp;
        divide += 1;
      }
    }
  }

  return exchanges;
}
