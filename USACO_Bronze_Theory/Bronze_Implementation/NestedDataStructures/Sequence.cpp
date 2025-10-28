#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  string og[N];

  string first, second;
  cin >> first;
  cin >> second;

  og[0] = first;
  og[N - 1] = second;

  map<string, vector<string>> bees;
  for (int i = 0; i < N - 2; i++) {
    string key, lhs, rhs;
    cin >> key;
    cin >> lhs;
    cin >> rhs;

    bees.insert({key, {lhs, rhs}});
  }

  set<string> used = {first, second};

  for (int i = 1; i < N - 1; i++) {
    for (auto bee : bees) {
      if (used.find(bee.first) != used.end()) {
        continue;
      }

      if (find(bee.second.begin(), bee.second.end(), og[i - 1]) !=
          bee.second.end()) {
        used.insert(bee.first);
        og[i] = bee.first;
      }
    }
  }

  for (string name : og) {
    cout << name << endl;
  }
}
