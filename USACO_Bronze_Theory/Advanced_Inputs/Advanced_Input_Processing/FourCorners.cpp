#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int test = 1; test <= T; test++) {
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

    cout << arr[0][0] + arr[0][arr[0].size() - 1] + arr[arr.size() - 1][0] +
                arr[arr.size() - 1][arr[0].size() - 1]
         << endl;
  }
}
