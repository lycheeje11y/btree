#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int N, K;
  cin >> N;
  cin >> K;

  vector<int> arr;

  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;

    arr.push_back(input);
  }

  sort(arr.begin(), arr.end());
  vector<vector<int>> ans;
  for (int a = 0; a < arr.size(); a++) {
    for (int b = a + 1; b < arr.size(); b++) {
      for (int c = b + 1; c < arr.size(); c++) {
        if (arr[a] + arr[b] + arr[c] == 10) {
          ans.push_back({arr[a], arr[b], arr[c]});
        }
      }
    }
  }

  for (int r = 0; r < ans.size(); r++) {
    for (int c = 0; c < ans[0].size(); c++) {
      cout << ans[r][c] << " ";
    }
    cout << endl;
  }

  return 0;
}
