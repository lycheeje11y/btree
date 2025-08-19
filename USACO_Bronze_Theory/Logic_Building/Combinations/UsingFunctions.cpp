#include <iostream>
#include <vector>

using namespace std;

bool isEven(vector<int> arr) {
  bool result = false;
  for (int i : arr) {
    if (i % 2 == 0) {
      result = true;
      break;
    }
  }

  return result;
}

bool sumIsBetween(vector<int> arr, int lhs, int rhs) {
  int sum = 0;
  for (int i : arr) {
    sum += i;
  }

  if (sum >= lhs && sum <= rhs) {
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

  vector<int> wow = {0, 0, 0, 0};
  for (int a = 0; a < N; a++) {
    for (int b = a + 1; b < N; b++) {
      for (int c = b + 1; c < N; c++) {
        for (int d = c + 1; d < N; d++) {
          wow[0] = arr[a];
          wow[1] = arr[b];
          wow[2] = arr[c];
          wow[3] = arr[d];

          if (isEven(wow) && sumIsBetween(wow, 10, 20)) {
            cout << "[" << wow[0] << ", " << wow[1] << ", " << wow[2] << ", "
                 << wow[3] << "]" << endl;
          }
        }
      }
    }
  }

  return 0;
}
