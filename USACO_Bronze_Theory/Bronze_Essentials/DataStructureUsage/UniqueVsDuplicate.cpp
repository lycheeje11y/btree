#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  int T;

  cin >> T;

  for (int test = 1; test <= T; test++) {
    int N;
    cin >> N;

    vector<int> ar;
    for (int i = 0; i < N; i++) {
      int input;
      cin >> input;

      ar.push_back(input);
    }

    int unique = 0;
    int dupe = 0;

    set<int> set;
    for (int i : ar) {
      if (set.find(i) == set.end()) {
        unique++;
        set.insert(unique);
      } else {
        dupe++;
      }
    }

    if (unique > dupe) {
      cout << "Unique";
    } else if (dupe > unique) {
      cout << "Duplicate";
    } else {
      cout << "Neither";
    }
    cout << endl;
  }
}
