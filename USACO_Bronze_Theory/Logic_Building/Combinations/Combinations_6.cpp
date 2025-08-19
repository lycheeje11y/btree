#include <iostream>
#include <vector>

using namespace std;

bool completesEvenOddReq(vector<int> arr) {
  int even = 0;
  int odd = 0;
  for (int i : arr) {
    if (i % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }

  if (even == odd) {
    // for (int i : arr) {
    //   cout << i << " ";
    // }
    //
    // cout << endl;
    return true;
  }

  return false;
}

bool completesAvgReq(vector<int> arr) {
  int sum = 0;
  for (int i : arr) {
    sum += i;
  }

  if (sum / arr.size() >= 5) {
    return true;
  }
  return false;
}

int main() {
  int N;
  cin >> N;

  vector<int> arr;
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;

    arr.push_back(input);
  }

  int ans = 0;
  vector<int> wow = {0, 0, 0, 0};
  for (int a = 0; a < N; a++) {
    for (int b = a + 1; b < N; b++) {
      for (int c = b + 1; c < N; c++) {
        for (int d = c + 1; d < N; d++) {
          wow[0] = arr[a];
          wow[1] = arr[b];
          wow[2] = arr[c];
          wow[3] = arr[d];

          if (completesEvenOddReq(wow) && completesAvgReq(wow)) {
            ans++;
          }
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}
