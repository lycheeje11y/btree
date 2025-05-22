#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int test = 1; test <= t; test++) {
    int n, m;
    cin >> n;
    cin >> m;

    vector<vector<char>> arr;
    for (int r = 0; r < n; r++) {
      vector<int> temp;
      for (int c = 0; c < m; c++) {
        char input;
        cin >> input;

        temp.push_back(input);
      }
      arr.push_back(temp);
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
