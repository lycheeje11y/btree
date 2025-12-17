#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> pedals;

  // sort(pedals.begin(), pedals.end());
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;
    pedals.push_back(input);
  }

  int cnt = N;
  for (int r = 0; r < pedals.size() - 1; r++) {
    for (int c = r + 1; c < pedals.size(); c++) {
      float sum = 0;
      vector<int> sample;
      for (int x = r; x <= c; x++) {
	sum += pedals[x];
	sample.push_back(pedals[x]);
      }

      float avg = sum / (c - r + 1);

      if (find(sample.begin(), sample.end(), avg) != sample.end()) {
	cnt++;
      }
    }
  }

  cout << cnt << endl;
}
