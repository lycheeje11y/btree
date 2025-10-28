#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> checkpoints;
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;
    checkpoints.push_back(input);
  }

  sort(checkpoints.begin(), checkpoints.end());

  vector<int> buf = {10000, 10000, 10000};
  vector<int> differences;
  for (int i = 1; i < checkpoints.size(); i++) {
    int difference = checkpoints[i] - checkpoints[i - 1];
    differences.push_back(difference);

    if (difference < buf[0]) {
      buf[1] = buf[0];
      buf[0] = difference;
    } else if (difference < buf[1]) {
      buf[2] = buf[1];
      buf[1] = difference;
    } else if (difference < buf[2]) {
      buf[2] = difference;
    }
  }

  cout << buf[0] + buf[1] + buf[2] << endl;
}
