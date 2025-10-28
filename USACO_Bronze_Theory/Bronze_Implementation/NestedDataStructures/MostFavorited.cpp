#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  map<string, set<int>> picks;
  for (int i = 0; i < N; i++) {
    string name;
    int M;

    cin >> name;
    cin >> M;

    picks.insert({name, {}});

    for (int j = 0; j < M; j++) {
      int input;
      cin >> input;
      picks[name].insert(input);
    }
  }

  map<int, vector<string>> ranking;

  for (auto person : picks) {
    for (int pick : person.second) {
      if (ranking.find(pick) == ranking.end()) {
        ranking.insert({pick, {person.first}});
      } else {
        ranking[pick].push_back(person.first);
      }
    }
  }

  int ans = 0;
  int greatest = 0;
  for (auto ranks : ranking) {
    if (ranks.second.size() > greatest) {
      greatest = ranks.second.size();
      ans = ranks.first;
    }
  }

  for (string i : ranking[ans]) {
    cout << i << endl;
  }
}
