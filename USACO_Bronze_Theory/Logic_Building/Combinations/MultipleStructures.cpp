#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> arr1;
  vector<int> arr2;
  vector<int> arr3;
  for (int j = 0; j < N; j++) {
    int input;
    cin >> input;
    arr1.push_back(input);
  }
  for (int j = 0; j < N; j++) {
    int input;
    cin >> input;
    arr2.push_back(input);
  }
  for (int j = 0; j < N; j++) {
    int input;
    cin >> input;
    arr3.push_back(input);
  }

  for (int a = 0; a < N; a++) {
    for (int b = 0; b < N; b++) {
      for (int c = 0; c < N; c++) {
        cout << arr1[a] << " " << arr2[b] << " " << arr3[c] << endl;
      }
    }
  }

  return 0;
}
