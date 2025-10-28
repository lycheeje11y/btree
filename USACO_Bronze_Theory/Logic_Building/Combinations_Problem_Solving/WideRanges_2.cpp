#include <_stdio.h>
#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<vector<int>> is_numerically_smaller(vector<vector<int>> lhs,
                                           vector<vector<int>> rhs) {
  vector<vector<vector<int>>> wowie = {lhs, rhs};

  sort(wowie.begin(), wowie.end());

  return wowie[0];
}

int get_unique_sum(vector<vector<int>> ranges, int a, int b, int c) {
  set<int> numbers;
  for (int i = ranges[a][0]; i < ranges[a][1]; i++) {
    numbers.insert(i);
  }
  for (int i = ranges[b][0]; i < ranges[b][1]; i++) {
    numbers.insert(i);
  }
  for (int i = ranges[c][0]; i < ranges[c][1]; i++) {
    numbers.insert(i);
  }

  return numbers.size();
}
int main() {
  int N;
  cin >> N;

  vector<vector<int>> ranges;
  for (int i = 0; i < N; i++) {
    int A, B;
    cin >> A;
    cin >> B;

    ranges.push_back({A, B});
  }

  int greatest = 0;
  vector<vector<int>> ans;
  for (int a = 0; a < N; a++) {
    for (int b = 0; b < N; b++) {
      for (int c = 0; c < N; c++) {
        int sum = get_unique_sum(ranges, a, b, c);

        if (sum > greatest) {
          greatest = sum;
          ans = {ranges[a], ranges[b], ranges[c]};
        } else if (sum == greatest) {
          ans = is_numerically_smaller(ans, {ranges[a], ranges[b], ranges[c]});
        }
      }
    }
  }

  sort(ans.begin(), ans.end());

  cout << ans[0][0] << "-" << ans[0][1] << ", " << ans[1][0] << "-" << ans[1][1]
       << ", " << ans[2][0] << "-" << ans[2][1] << endl;
}
