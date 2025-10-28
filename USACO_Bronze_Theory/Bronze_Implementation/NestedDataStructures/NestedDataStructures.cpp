#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  map<string, vector<int>> map;
  for (int i = 0; i < N; i++) {
    string key;
    int M;
    cin >> key;
    cin >> M;

    vector<int> values;
    for (int j = 0; j < M; j++) {
      int input;
      cin >> input;

      values.push_back(input);
    }

    map.insert({key, values});
  }

  for (auto ma : map) {
    cout << ma.first + ": [";

    for (int i = 0; i < ma.second.size() - 1; i++) {
      cout << to_string(ma.second[i]) + ", ";
    }

    cout << ma.second[ma.second.size() - 1] << "]" << endl;
  }
}
