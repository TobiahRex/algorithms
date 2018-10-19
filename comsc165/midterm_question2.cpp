#include <iostream>
#include <vector>
#include <string>
using namespace std;

void GetQuarterlySales(vector<string>, vector<vector<int>> &);
void ShowAverageSales(vector<string>, vector<vector<int>> &);
void ShowAveragePerQuarter(vector<string>, vector<vector<int>> &);

int main() {
  vector<string> regionsData;
  cout << "How many regions? ";
  int region_SIZE;
  cin >> region_SIZE;

  for (int i = 0; i < region_SIZE; i++) {
    cout << "Enter Name of Region " << i + 1 << endl;
    string region_name("");
    getline(cin, region_name);
    regionsData.push_back(region_name);
  }

  vector<int> quartersData;

  for (int i = 0; i < 4; i++) {
    cout << "Enter Title for Quarter " << i + 1 << endl;
    int quarterTitle{};
    cin >> quarterTitle;
    quartersData.push_back(quarterTitle);
  }

  vector<vector<int>> data = {};

  GetQuarterlySales(regionsData, data);
  ShowAverageSales(regionsData, data);
  ShowAveragePerQuarter(regionsData, data);

  return 0;
}

void GetQuarterlySales(vector<string> regions, vector<vector<int>> &data) {
  for (int i = 0; i < regions.size(); i++) {
    for (int j = 0; j < 4; j++) {
      cout << "Enter Q" << j + 1 << " Data for Region: " << regions[i] << endl;
      cin >> data[j][i];
    }
  }
}

void ShowAverageSales(vector<string> regions, vector<vector<int>> &data) {
  float total{};

  for (int i = 0; i < regions.size(); i++) {
    for (int j = 0; j < 4; j++) {
      total += (float)data[j][i];
    }
  }

  float avg = (total / ((float)regions.size() * 4.00))
  cout << "Average Sales Whole Company: " << setprecision(2) << fixed <<  avg << endl;
}

void ShowAveragePerQuarter(vector<string> regions, vector<vector<int>> &data) {
  for (int i = 0; i < regions.size(); i++) {
    float total{};
    for (int j = 0; j < 4; j++) {
      total += (float)data[j][i];
    }
    cout << "Average Sale for Region " << regions[j] << " = " << (total / 4.00) << endl;
  }
}
