#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

bool sumIsPrime(vector<int> wow) {
  int sum = 0;
  for (int i : wow) {
    sum += i;
  }

  if (sum == 1)
    return false;
  for (int i = 2; i < sum; i++) {
    if (sum % i == 0)
      return false;
  }
  return true;
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

          if (sumIsPrime(wow)) {
            cout << "[" << wow[0] << ", " << wow[1] << ", " << wow[2] << ", "
                 << wow[3] << "]" << endl;
          }
        }
      }
    }
  }
  return 0;
}
