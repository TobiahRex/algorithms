#include <iostream>
#include <iomanip>
#include "NumDays.h"
using namespace std;

int main() {
  NumDays *worker1 = new NumDays(25);
  NumDays *worker2 = new NumDays(15);

  cout << setprecision(2) << fixed;
  cout << "Worker 1 worked " << worker1->getHours() << " hours." << endl;
  cout << "Worker 2 worked " << worker2->getHours() << " hours." << endl;
  cout << "Worker 1 worked " << worker1->getDays() << " days." << endl;
  cout << "Worker 2 worked " << worker2->getDays() << " days." << endl;

  NumDays *worker3 = new NumDays(*worker1 + *worker2);
  cout << "Worker 3 Hours worked: " << worker3->getHours() << endl;
  cout << "Worker 3 Days worked: " << worker3->getDays() << endl;

  NumDays *worker4 = worker3++;
  cout << "Worker 4 Hours worked: " << worker4->getHours() << endl;
  cout << "Worker 4 Days worked: " << worker4->getDays() << endl;

  *worker4 = ++worker3;
  cout << "Worker 4 Hours worked: " << worker4->getHours() << endl;
  cout << "Worker 4 Days worked: " << worker4->getDays() << endl;

  NumDays worker4 = worker3--;
  cout << "Worker 4 Hours worked: " << worker4->getHours() << endl;
  cout << "Worker 4 Days worked: " << worker4->getDays() << endl;

  NumDays worker4 = --worker3;
  cout << "Worker 4 Hours worked: " << worker4->getHours() << endl;
  cout << "Worker 4 Days worked: " << worker4->getDays() << endl;


  return 0;
}
