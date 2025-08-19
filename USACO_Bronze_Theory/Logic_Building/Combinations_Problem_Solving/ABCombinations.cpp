#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int getDigitSum(int i) {
  string hello = to_string(i);
  int sum = 0;
  for (char i : hello) {
    sum += (i - '0');
  }

  return sum;
}

int main() {
  int N, M;
  cin >> N;
  cin >> M;

  vector<int> arr1;
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;
    arr1.push_back(input);
  }
  vector<int> arr2;
  for (int i = 0; i < M; i++) {
    int input;
    cin >> input;
    arr2.push_back(input);
  }

  sort(arr1.begin(), arr1.end());
  sort(arr2.begin(), arr2.end());

  for (int a = 0; a < arr1.size(); a++) {
    for (int b = 0; b < arr2.size(); b++) {
      int sum = getDigitSum(arr1[a]) + getDigitSum(arr2[b]);
      if (20 <= sum && sum <= 30) {
        cout << arr1[a] << " " << arr2[b] << endl;
      }
    }
  }

  return 0;
}
