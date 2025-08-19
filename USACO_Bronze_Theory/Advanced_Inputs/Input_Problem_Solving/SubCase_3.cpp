#include <iostream>

using namespace std;

int main() {
  int T;
  cin >> T;
  for (int test = 1; test <= T; test++) {
    int N, M;
    cin >> N;
    cin >> M;

    for (int r = 0; r < N; r++) {
      for (int c = 0; c < M; c++) {
        char input;
        cin >> input;

        if (input == 'A') {
          cout << "Test Case " << test << ": (" << r << "," << c << ")";
        }
      }
    }
  }
  return 0;
}
