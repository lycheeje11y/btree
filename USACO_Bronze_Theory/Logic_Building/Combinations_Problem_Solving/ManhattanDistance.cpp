#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

bool check_unique(vector<int> lhs, vector<int> rhs) {
  if (lhs[0] == rhs[0] && lhs[1] == rhs[1])
    return false;
  else
    return true;
}

int calculate_distance(vector<int> lhs, vector<int> rhs) {
  return abs(lhs[0] - rhs[0]) + abs(lhs[1] - rhs[1]);
}

int main() {
  int N;
  cin >> N;

  vector<vector<int>> cds;

  for (int i = 0; i < N; i++) {
    vector<int> temp;
    int input1;
    int input2;
    cin >> input1;
    cin >> input2;

    temp.push_back(input1);
    temp.push_back(input2);

    cds.push_back(temp);
  }

  // for (vector<int> x : cds) {
  //   for (int h : x) {
  //     cout << h << " ";
  //   }
  //
  //   cout << endl;
  // }
  //
  int largest = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (!check_unique(cds[i], cds[j]))
        break;
      int distance = calculate_distance(cds[i], cds[j]);
      if (distance > largest)
        largest = distance;
    }
  }

  cout << largest << endl;
}
