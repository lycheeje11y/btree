#include <iostream>
#include <map>

using namespace std;

int main() {
  int T;
  cin >> T;

  for (int test = 1; test <= T; test++) {
    int N;
    cin >> N;

    map<char, int> ans;
    for (int i = 0; i < N; i++) {
      char input;
      cin >> input;
      if (ans[input] == ' ') {
        ans[input] = 1;
      } else {
        ans[input] = ans[input] + 1;
      }
    }

    for (auto v : ans) {
      cout << v.first << ":" << v.second << ",";
    }
    cout << endl;
  }
}
