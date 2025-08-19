#include <iostream>
#include <vector>
using namespace std;

int main() {
  int R, C;
  cin >> R;
  cin >> C;

  vector<vector<int>> arr;

  for (int r = 0; r < R; r++) {
    vector<int> temp;
    for (int c = 0; c < C; c++) {
      temp.push_back(c + 1);
    }
    arr.push_back(temp);
  }

  for (int r = 0; r < R; r++) {
    cout << "[";
    for (int c = 0; c < C; c++) {
      cout << arr[r][c];
      if (c < C) {
        cout << ",";
      }
    }
    cout << "]" << endl;
  }
  return 0;
}
