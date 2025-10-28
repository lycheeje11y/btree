#include <iostream>
#include <set>
#include <vector>

using namespace std;

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
  for (int a = 0; a < N; a++) {
    for (int b = a + 1; b < N; b++) {
      for (int c = b + 1; c < N; c++) {
        int sum = get_unique_sum(ranges, a, b, c);
        if (sum > greatest) {
          greatest = sum;
        }
      }
    }
  }
  cout << greatest << endl;

  return 0;
}
