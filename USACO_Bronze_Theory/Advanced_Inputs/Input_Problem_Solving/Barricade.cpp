#include <iostream>
#include <vector>

using namespace std;

int main() {
  int T;
  cin >> T;
  for (int test = 1; test <= T; test++) {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
      int M;
      cin >> M;

      vector<vector<char>> arr;
      for (int r = 0; r < 2; r++) {
        vector<char> temp;
        for (int c = 0; c < M; c++) {
          char input;
          cin >> input;
          temp.push_back(input);
        }
        arr.push_back(temp);
      }

      string ans = "Yes";

      for (int c = 0; c < M - 1; c++) {
        if (arr[0][c + 1] == '.') {
          continue;
        } else if (arr[1][c + 1] == '.') {
          continue;
        } else {
          ans = "No";
          break;
        }
      }

      cout << ans << endl;
    }
  }
}
