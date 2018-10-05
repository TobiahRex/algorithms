///**********************************************************************************
/// Description: Practice using pointers
/// Author: Tobiah Bickley
/// COMSC 165 Section 8312
/// Date: Oct 4, 2018
///***********************************************************************************
#include <iostream>
using namespace std;


int main() {
  // int myvar = 2;
  // int *foo{&myvar};
  // cout << foo << endl;
  // int baz{*foo};
  //
  // cout << *foo << endl;
  // cout << &baz << endl;

  // int vals[3] = {9, 8, 5};
  // int *valptr = vals;
  // cout << *valptr << endl;
  //
  // // cout << valptr << endl;
  // valptr += 2;
  //
  // cout << *valptr << endl;
  // cout << *vals << endl;
  //
  // cout << "vals: " << vals << " | valptr: " << valptr << endl;
  // cout << vals - valptr << endl;

  // double *ptr = nullptr;
  // cout << ptr << endl;
  // ptr = new double;
  // cout << ptr << endl;
  // delete ptr;
  // cout << ptr << endl;

  int *someArr = nullptr;
  cout << someArr << endl;
  someArr = new int[10];

  for (int i = 0; i < 10; i++) {
    *(someArr + i) = i + 5;
    cout << someArr[i] << endl;
    cout << &someArr[i] << endl;
  }
  cout << *someArr << endl;
  cout << *(someArr + 1) << endl;
  delete someArr;
  cout << *someArr << endl;
  cout << *(someArr + 1) << endl;


  return 0;
}
