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
      char G;
      int M;
      cin >> G;
      cin >> M;

      ans[G] = 0;

      for (int j = 0; j < M; j++) {
        int input;
        cin >> input;

        ans[G] += input;
      }
    }

    for (auto v : ans) {
      cout << v.first() << ":" << v.second << ",";
    }

    cout << endl;
  }
  return 0;
}
