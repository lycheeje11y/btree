#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
  int N;
  cin >> N;

  map<string, set<string>> bees;

  for (int i = 0; i < N; i++) {
    string user;
    int num;
    cin >> user;
    cin >> num;

    for (int j = 0; j < num; j++) {
      string input;
      cin >> input;

      if (bees.find(input) != bees.end()) {
        bees[input].insert(user);
      } else {
        bees.insert({input, {user}});
      }
    }
  }

  int greatest = 0;
  string ans;
  for (auto bee : bees) {
    if (bee.second.size() > greatest) {
      greatest = bee.second.size();
      ans = bee.first;
    }
  }

  cout << ans + " - ";
  for (string i : bees[ans]) {
    cout << i + " ";
  }

  return 0;
}
