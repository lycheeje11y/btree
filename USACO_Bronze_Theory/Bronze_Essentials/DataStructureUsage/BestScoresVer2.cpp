#include <algorithm>
#include <iostream>
#include <map>
#include <sys/wait.h>
#include <vector>
using namespace std;

void printMap(map<string, vector<int>> map) {
  for (const auto pair : map) {
    cout << pair.first << ": ";

    cout << "{";
    for (int i : pair.second) {
      cout << i << ",";
    }
    cout << "}" << endl;
  }
}

vector<string> getHighest(map<string, vector<int>> map) {
  int highest = 0;
  vector<string> result;

  for (const auto pair : map) {
    for (int i : pair.second) {
      if (i == highest) {
        result.push_back(pair.first);
      } else if (i > highest) {
        result = {pair.first};
        highest = i;
      }
    }
  }

  sort(result.begin(), result.end());

  return result;
}

vector<string> getHighestAverage(map<string, vector<int>> map) {
  //  cout << map.size();
  int highest = 0;
  vector<string> result;

  for (const auto pair : map) {
    int sum = 0;
    for (int i : pair.second) {
      sum += i;
    }
    // cout << pair.first << " " << sum << endl;
    int avg = sum / pair.second.size();

    if (avg == highest) {
      result.push_back(pair.first);
    } else if (avg > highest) {
      result = {pair.first};
      highest = avg;
    }
  }

  sort(result.begin(), result.end());

  return result;
}

int main() {
  int N;
  cin >> N;

  map<string, vector<int>> record;

  for (int i = 0; i < N; i++) {
    string student;
    int M;

    cin >> student;
    cin >> M;

    vector<int> scores;
    for (int j = 0; j < M; j++) {
      int score;
      cin >> score;
      scores.push_back(score);
    }

    record.insert({student, scores});
  }

  vector<string> highest = getHighest(record);
  vector<string> highestAvg = getHighestAverage(record);

  for (string x : highest) {
    cout << x << " ";
  }
  cout << endl;

  for (string x : highestAvg) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
