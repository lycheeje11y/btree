#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  map<int, set<int>> grades;
  for (int i = 0; i < N; i++) {
    int id, num;
    cin >> id;
    cin >> num;

    grades.insert({id, {}});
    for (int j = 0; j < num; j++) {
      int input;
      cin >> input;

      grades[id].insert(input);
    }
  }

  vector<int> ans;
  int greatest = 10000;
  for (auto grade : grades) {
    if (grade.second.size() < greatest) {
      greatest = grade.second.size();
      ans.clear();
      ans.push_back(grade.first);
    } else if (grade.second.size() == greatest) {
      ans.push_back(grade.first);
    }
  }

  for (int i : ans) {
    cout << i << endl;
  }
}
