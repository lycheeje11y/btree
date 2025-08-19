#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> arr;
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;
    arr.push_back(input);
  }

  sort(arr.begin(), arr.end());

  for (int a = 0; a < N; a++) {
    for (int b = a + 1; b < N; b++) {
      for (int c = b + 1; c < N; c++) {
        cout << "[" << arr[a] << ", " << arr[b] << ", " << arr[c] << "]"
             << endl;
      }
    }
  }
}
