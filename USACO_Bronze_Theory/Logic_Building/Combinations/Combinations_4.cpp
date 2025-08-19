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

  int cnt = 0;
  for (int x = 0; x < N; x++) {
    for (int y = x + 1; y < N; y++) {
      for (int z = y + 1; z < N; z++) {
        if (arr[x] + arr[y] + arr[z] == 10) {
          cnt++;
        }
      }
    }
  }

  cout << cnt << endl;
}
