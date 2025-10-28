#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  map<string, vector<int>> mapo;
  for (int i = 0; i < N; i++) {
    string name;
    cin >> name;

    int num;
    cin >> num;

    mapo.insert({name, {}});
    for (int j = 0; j < num; j++) {
      int input;
      cin >> input;
      mapo[name].push_back(input);
    }
  }

  int greatest = 0;
  string ans;
  for (auto ma : mapo) {
    int avg =
        accumulate(ma.second.begin(), ma.second.end(), 0) / ma.second.size();
    if (avg > greatest) {
      greatest = avg;
      ans = ma.first;
    }
  }

  cout << ans << " ";
  sort(mapo[ans].begin(), mapo[ans].end());
  for (int i : mapo[ans]) {
    cout << i << " ";
  }
  cout << endl;
}
