///**********************************************************************************
/// Description: Splices array like in JS's Array.prototype.splice()
/// Author: Tobiah Rex
/// Date: July 14, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> splice(vector<int> &arr, int start, int stop) {
  vector<int>::const_iterator right = arr.begin() + stop;
  vector<int>::const_iterator left;

  switch(start) {
    case 0: left = arr.begin(); break;
    default: left = arr.begin() + start;
  }

  vector<int> newArr(left, right);
  return newArr;
}
