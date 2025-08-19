#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> arr;
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;
    arr.push_back(input);
  }

  // for (int i : arr) {
  //    cout << i << endl;
  //  }
  //
  set<string> used;

  sort(arr.begin(), arr.end());

  for (int a = N - 1; a >= 0; a--) {
    for (int b = a - 1; b >= 0; b--) {
      for (int c = b - 1; c >= 0; c--) {
        int x = arr[a];
        int y = arr[b];
        int z = arr[c];

        string entry = to_string(x) + " " + to_string(y) + " " + to_string(z);

        if (used.find(entry) == used.end()) {
          used.insert(entry);
          cout << x << " " << y << " " << z << endl;
        }
      }
    }
  }
}
