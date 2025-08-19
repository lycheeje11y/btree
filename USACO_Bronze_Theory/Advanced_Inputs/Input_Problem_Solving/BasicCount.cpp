#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int test = 1; test <= T; test++) {
    int N;
    cin >> N;

    int cnt = 0;
    for (int i = 0; i < N; i++) {
      int input;
      cin >> input;

      if (input % 2 == 0) {
        cnt++;
      }
    }
    cout << "Test Case " << test << ": " << cnt << endl;
  }
  return 0;
}
