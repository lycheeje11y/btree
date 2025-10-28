#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> candies;
  for (int i = 0; i < N; i++) {
    int A, B;
    cin >> A;
    cin >> B;

    candies.push_back({A, B});
  }

  sort(candies.begin(), candies.end());

  int price = 0;
  int cnt = 0;

  int index = 0;
  while (true) {
    if (candies[index][1] == 0) {
      index++;
      continue;
    }

    if (cnt == 10)
      break;

    price += candies[index][0];
    candies[index][1]--;
    cnt++;
  }

  cout << price << endl;
}
