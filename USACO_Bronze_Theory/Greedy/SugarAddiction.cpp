#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, M;
  cin >> N;
  cin >> M;

  vector<vector<int>> drinks;
  for (int i = 0; i < N; i++) {
    int A, B;
    cin >> A;
    cin >> B;
    drinks.push_back({B, A});
  }

  sort(drinks.begin(), drinks.end());
  reverse(drinks.begin(), drinks.end());

  int intake = 0;
  int cnt = 0;
  int index = 0;
  while (true) {
    if (cnt == M) {
      break;
    }
    if (drinks[index][1] == 0) {
      index++;
      continue;
    }

    intake += drinks[index][0];
    drinks[index][1]--;
    cnt++;
  }

  cout << intake << endl;
}
