#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;
  for (int test = 1; test <= T; test++) {
    int N, M;
    cin >> N;
    cin >> M;

    vector<vector<int>> arr;
    for (int r = 0; r < N; r++) {
      vector<int> temp;
      for (int c = 0; c < N; c++) {
        temp.push_back(0);
      }
      arr.push_back(temp);
    }

    for (int i = 0; i < M; i++) {
      int r, c;
      cin >> r;
      cin >> c;

      arr[r][c] = arr[r][c] + 1;
    }

    for (int r = 0; r < arr.size(); r++) {
      cout << "[";
      for (int c = 0; c < arr[0].size(); c++) {

        cout << arr[r][c] << (c == arr[0].size() - 1 ? "]" : ", ");
      }
      cout << endl;
    }
  }

  return 0;
}
