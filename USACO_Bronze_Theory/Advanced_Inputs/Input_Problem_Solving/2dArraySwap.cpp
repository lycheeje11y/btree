#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int t = 1; t <= T; t++) {
    int R, C;
    cin >> R;
    cin >> C;

    vector<vector<int>> arr;
    for (int r = 0; r < R; r++) {
      vector<int> temp;
      for (int c = 0; c < C; c++) {
        int input;
        cin >> input;
        temp.push_back(input);
      }
      arr.push_back(temp);
    }

    for (int r = 1; r < R; r += 2) {
      vector<int> buf = arr[r];

      arr[r] = arr[r - 1];
      arr[r - 1] = buf;
    }

    for (int r = 0; r < R; r++) {
      cout << "[";
      for (int c = 0; c < C; c++) {
        cout << arr[r][c];
        if (c != C - 1) {
          cout << ",";
        }
      }
      cout << "]" << endl;
    }
  }
  return 0;
}
