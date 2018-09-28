#include <iostream>
#include <iomanip>
using namespace std;

float GetAvg(int a[], int);

int main() {
  const int SIZE = 5;
  int ages[SIZE];

  for (int i{}; i < 5; i++) {
    cout << "What is the age of employee #" << i + 1 << ". ";
    int age{};
    cin >> age;
    ages[i] = age;
  }

  float answer = GetAvg(ages, SIZE);

  cout << "Average Age: " << setprecision(2) << fixed << answer << endl;

  return 0;
}

float GetAvg(int a[], int SIZE) {
  int sum{};
  float avg{}, qty = (float)(SIZE);

  for (int i = 0; i < SIZE; i++) {
    sum += a[i];
  }

  avg = sum / qty;
  return avg;
}
