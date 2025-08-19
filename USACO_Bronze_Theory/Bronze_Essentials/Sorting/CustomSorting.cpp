#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;

  vector<vector<int>> arr;
  for (int r = 0; r < N; r++) {
    vector<int> temp;
    for (int c = 0; c < 2; c++) {
      int input;
      cin >> input;
      temp.push_back(input);
    }
    arr.push_back(temp);
  }

  sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
    return a[0] == b[0] ? a[1] < b[1] : a[0] < b[0];
  });
  for (int r = 0; r < N; r++) {
    for (int c = 0; c < 2; c++) {
      cout << arr[r][c];
      if (c == 0) {
        cout << ",";
      }
    }
    cout << endl;
  }
  return 0;
}
