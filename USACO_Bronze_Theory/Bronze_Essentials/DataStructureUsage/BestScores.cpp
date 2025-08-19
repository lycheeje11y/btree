#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<string, array<int, 2>> map;
  for (int i = 0; i < n; i++) {
    string name;
    cin >> name;
    int m;
    cin >> m;

    int greatest = 0;
    int sum = 0;
    for (int j = 0; j < m; j++) {
      int input;
      cin >> input;

      if (input > greatest) {
        greatest = input;
      }

      sum += input;
    }

    map[name] = {greatest, sum / m};
  }

  int greatest = 0;
  vector<string> greatest_ans;
  int average = 0;
  vector<string> average_ans;
  for (auto thingie : map) {
    int student_greatest = thingie.second[0];
    int student_average = thingie.second[1];

    if (student_greatest > greatest) {
      greatest = student_greatest;
      greatest_ans.clear();
      greatest_ans[0] = thingie.first;
    } else if (student_greatest == greatest) {
      greatest_ans.push_back(thingie.first);
    }

    if (student_average > average) {
      average = student_average;
      average_ans.clear();
      average_ans[0] = thingie.first;
    } else if (student_average == average) {
      average_ans.push_back(thingie.first);
    }
  }

  sort(greatest_ans.begin(), greatest_ans.end());
  sort(average_ans.begin(), average_ans.end());

  for (string ans : greatest_ans) {
    cout << ans << " ";
  }
  cout << endl;
  for (string ans : average_ans) {
    cout << ans << " ";
  }
  cout << endl;

  return 0;
}
