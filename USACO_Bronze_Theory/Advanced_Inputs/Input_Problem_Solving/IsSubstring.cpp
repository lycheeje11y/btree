#include <iostream>
#include <string>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int test = 1; test <= T; test++) {
    string s, p;
    cin >> s;
    cin >> p;

    if (s.find(p) != string::npos) {
      cout << "Yes";
    } else {
      cout << "No";
    }
  }
}
