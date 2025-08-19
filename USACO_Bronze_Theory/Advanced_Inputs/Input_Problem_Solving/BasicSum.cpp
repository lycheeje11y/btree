#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int test = 1; test <= T; test++) {
    int N;
    cin >> N;

    int sum = 0;

    for (int i = 0; i < N; i++) {
      int input;
      cin >> input;
      sum += input;
    }

    cout << sum << endl;
  }
  return 0;
}
