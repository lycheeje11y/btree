#include <iostream>
#include <set>
#include <vector>

using namespace std;

int doThree(vector<int> coins) {
  set<int> used;
  for (int x = 0; x < 2; x++) {
    for (int y = 0; y < 2; y++) {
      for (int z = 0; z < 2; z++) {
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

        used.insert(sum);
      }
    }
  }

  return used.size();
}

int doTwo(vector<int> coins) {
  set<int> used;
  for (int x = 0; x < 2; x++) {
    for (int y = 0; y < 2; y++) {
      int sum = 0;
      if (x == 1) {
        sum += coins[0];
      }
      if (y == 1) {
        sum += coins[1];
      }

      used.insert(sum);
    }
  }

  return used.size();
}

int main() {
  int T;
  cin >> T;

  for (int test = 1; test <= T; test++) {
    int N;
    cin >> N;

    vector<int> coins;
    for (int i = 0; i < N; i++) {
      int input;
      cin >> input;
      coins.push_back(input);
    }

    if (N == 2) {
      cout << doTwo(coins) << endl;
    } else {
      cout << doThree(coins) << endl;
    }
  }
}
