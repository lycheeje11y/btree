#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> arr1;
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;
    arr1.push_back(input);
  }
  vector<int> arr2;
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;
    arr2.push_back(input);
  }
  vector<int> arr3;
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;
    arr3.push_back(input);
  }

  for (int x = N - 1; x >= 0; x--) {
    for (int y = N - 1; y >= 0; y--) {
      for (int z = N - 1; z >= 0; z--) {
        cout << arr1[x] << " " << arr2[y] << " " << arr3[z] << endl;
      }
    }
  }

  return 0;
}
