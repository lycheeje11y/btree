#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;
  for (int test = 0; test < T; test++) {
    int N = 0;
    cin >> N;

    vector<char> letters;
    for (int i = 0; i < N; i++) {
      char input;
      cin >> input;

      letters.push_back(input);
    }
    for (int i = letters.size() - 1; i >= 0; i--) {
      if (i == 0) {
        cout << 0 << endl;
      }
      if (letters[i] < letters[i - 1]) {
        cout << i << endl;
        break;
      }
    }
  }
}
