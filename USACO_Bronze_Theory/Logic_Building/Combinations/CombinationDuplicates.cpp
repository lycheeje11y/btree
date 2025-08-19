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

  sort(arr.begin(), arr.end());

  set<string> used;
  for (int x = 0; x < N; x++) {
    for (int y = x + 1; y < N; y++) {
      for (int z = y + 1; z < N; z++) {
        string str = to_string(arr[x]) + " " + to_string(arr[y]) + " " +
                     to_string(arr[z]);

        if (used.find(str) == used.end()) {
          cout << str << endl;
          used.insert(str);
        }
      }
    }
  }
}
