#include <iostream>
#include <set>

using namespace std;

int main() {
  int T;
  cin >> T;

  for (int test = 1; test <= T; test++) {
    int N, K;
    cin >> N;
    cin >> K;

    string str;
    cin >> str;

    set<string> set;
    for (int i = 0; i < N - K + 1; i++) {
      string sub = str.substr(i, K);
      set.insert(sub);
    }

    cout << set.size() << endl;
  }
}
