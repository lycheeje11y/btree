#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int cnt = 0;
  for (int a = 1; a <= N; a++) {
    for (int b = 1; b <= N; b++) {
      for (int c = 1; c <= N; c++) {
        for (int d = 1; d <= N; d++) {
          if (a + b + c + d == 20) {
            cnt++;
          }
        }
      }
    }
  }

  cout << cnt << endl;
}
