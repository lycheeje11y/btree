#include <iostream>
#include <vector>

using namespace std;

void print_grid(vector<vector<int>> grid) {
  for (int r = 0; r < grid.size(); r++) {
    for (int c = 0; c < grid[0].size(); c++) {
      int v = grid[r][c];
      if (v > 0) {
        cout << v;
      } else {
        cout << "-";
      }
    }

    cout << endl;
  }
}
int main() {
  int T;
  cin >> T;
  for (int test = 1; test <= T; test++) {
    int N, M;
    cin >> N;
    cin >> M;

    vector<int> pos;

    vector<vector<int>> grid;
    for (int r = 0; r < N; r++) {
      vector<int> poof;
      for (int c = 0; c < M; c++) {
        char input;
        cin >> input;

        if (input == 'P') {
          poof.push_back(-1);
          pos = {r, c};
        } else {
          poof.push_back(0);
        }
      }
      grid.push_back(poof);
    }

    int K;
    cin >> K;
    for (int i = 1; i <= K; i++) {
      string dir;
      cin >> dir;
      if (dir == "N") {
        pos[0]--;
        grid[pos[0]][pos[1]] = i;
      }
      if (dir == "S") {
        pos[0]++;
        grid[pos[0]][pos[1]] = i;
      }
      if (dir == "E") {
        pos[1]++;
        grid[pos[0]][pos[1]] = i;
      }
      if (dir == "W") {
        pos[1]--;
        grid[pos[0]][pos[1]] = i;
      }
    }

    print_grid(grid);
  }
}
