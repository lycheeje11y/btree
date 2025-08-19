#include <iostream>
#include <vector>

using namespace std;

int main() {
  int T;
  cin >> T;
  for (int test = 1; test <= T; test++) {
    vector<int> coins;
    for (int i = 0; i < 4; i++) {
      int input;
      cin >> input;
      coins.push_back(input);
    }

    string ans = "No";

    for (int x = 0; x < 2; x++) {
      for (int y = 0; y < 2; y++) {
        for (int z = 0; z < 2; z++) {
          for (int a = 0; a < 2; a++) {
            int sum = 0;
            if (x == 1) {
              sum += coins[0];
            }
            if (y == 1) {
              sum += coins[1];
            }
            if (z == 1) {
              sum += coins[2];
            }
            if (a == 1) {
              sum += coins[3];
            }

            if (sum == 10) {
              ans = "Yes";
            }
          }
        }
      }
    }

    cout << ans << endl;
  }
  return 0;
}
