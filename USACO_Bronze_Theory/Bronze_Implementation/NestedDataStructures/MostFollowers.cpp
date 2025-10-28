#include <algorithm>
#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
  int N;
  cin >> N;

  map<string, set<string>> users;
  for (int i = 0; i < N; i++) {
    string user;
    int num;
    cin >> user;
    cin >> num;

    for (int j = 0; j < num; j++) {
      string input;
      cin >> input;

      if (users.find(input) == users.end()) {
        users.insert(input, {user});
      } else {
        users[user].insert(user);
      }
    }
  }

  int greatest = 0;
  string ans;

  for (auto user : users) {
    if (user.second.size() > greatest) {
      greatest = user.second.size();
    }

    ans = user.first;
  }

  sort(users[ans].begin(), users[ans].end());
  cout << ans << " - ";
  for (string i : users[ans]) {
    cout << i << " ";
  }
  cout << endl;
}
