#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> cc;
  for (int i = 0; i < 4; i++) {
    int input;
    cin >> input;
    cc.push_back(input);
  }

  int cnt = 0;

  bool comment_out = false;
  for (int a = cc[0] - 2; a <= cc[0] + 2; a++) {
    if (a < 1 || a > 9 && !comment_out) {
      continue;
    }
    for (int b = cc[1] - 2; b <= cc[1] + 2; b++) {
      if (b < 1 || b > 9 && !comment_out) {
        continue;
      }
      for (int c = cc[2] - 2; c <= cc[2] + 2; c++) {
        if (c < 1 || c > 9 && !comment_out) {
          continue;
        }
        for (int d = cc[3] - 2; d <= cc[3] + 2; d++) {
          if (d < 1 || d > 9 && !comment_out) {
            continue;
          }
          // cout << a << " " << b << " " << c << " " << d << endl;
          cnt++;
        }
      }
    }
  }

  cout << cnt << endl;

  return 0;
}
