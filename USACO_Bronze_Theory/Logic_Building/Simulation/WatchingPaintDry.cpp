#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, M;
  cin >> N;
  cin >> M;

  vector<int> wall;
  for (int i = 0; i < N; i++) {
    wall.push_back(0);
  }

  vector<vector<int>> portions;
  for (int i = 0; i < M; i++) {
    int A, B;
    cin >> A;
    cin >> B;
    portions.push_back({A - 1, B});
  }

  for (int r = 0; r < portions.size(); r++) {
    for (int i = portions[r][0]; i < portions[r][1]; i++) {
      wall[i]++;
    }
  }

  for (int i = 0; i < wall.size(); i++) {
    cout << wall[i] << " ";
  }
  cout << endl;
}
