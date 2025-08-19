#include <iostream>
#include <vector>

using namespace std;

int done(vector<int> coins, int n) {
  for (int x = 0; x < 2; x++) {
    for (int y = 0; y < 2; y++) {
      for (int z = 0; z < 2; z++) {
        for (int a = 0; a < 2; a++) {
          for (int b = 0; b < 2; b++) {
            int sum = 0;
            int cnt = 0;
            if (x == 1) {
              sum += coins[0];
              cnt++;
            }
            if (y == 1) {
              sum += coins[1];
              cnt++;
            }
            if (z == 1) {
              sum += coins[2];
              cnt++;
            }
            if (a == 1) {
              sum += coins[3];
              cnt++;
            }
            if (b == 1) {
              sum += coins[4];
              cnt++;
            }
            if (sum == n) {
              // cout << x << " " << y << " " << z << " " << a << " " << b <<
              // endl;
              return cnt;
            }
          }
        }
      }
    }
  }
  return -1;
}
int main() {
  int t;
  cin >> t;
  for (int test = 1; test <= t; test++) {
    int n;
    cin >> n;
    vector<int> coins;
    for (int i = 0; i < 4; i++) {
      int input;
      cin >> input;
      coins.push_back(input);
    }

    // for (int i : coins) {
    //   cout << i << " ";
    // }
    // cout << endl;
    //
    cout << done(coins, n) << endl;
  }
  return 0;
}
