#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int test = 1; test <= T; test++) {
    int N;
    cin >> N;
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
      cout << arr[r][0] << "," << arr[r][1] << endl;
    }
  }
  return 0;
}
