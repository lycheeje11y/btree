#include <iostream>
#include <vector>

using namespace std;

void print_grid(vector<vector<int>> grid) {
  for (int r = 0; r < grid.size(); r++) {
    for (int c = 0; c < grid[0].size(); c++) {
      cout << grid[r][c] << " ";
    }
    cout << endl;
  }
}

vector<vector<int>> ping(vector<vector<int>> grid, int x, int y) {
  grid[x][y]++;
  if (x != 0)
    grid[x - 1][y]++;
  if (x != grid.size() - 1)
    grid[x + 1][y]++;
  if (y != 0)
    grid[x][y - 1]++;
  if (y != grid[0].size() - 1)
    grid[x][y + 1]++;

  return grid;
}

int main() {
  int N, M;
  cin >> N;
  cin >> M;

  vector<vector<int>> grid;
  for (int r = 0; r < N; r++) {
    vector<int> temp;
    for (int c = 0; c < N; c++) {
      temp.push_back(0);
    }
    grid.push_back(temp);
  }

  for (int r = 0; r < M; r++) {
    int x, y;
    cin >> x;
    cin >> y;

    grid = ping(grid, x, y);
  }

  int greatest = 0;
  int greatest_cnt = 0;
  ;
  for (int r = 0; r < N; r++) {
    for (int c = 0; c < N; c++) {
      if (grid[r][c] > greatest) {
        greatest = grid[r][c];
        greatest_cnt = 1;
      } else if (grid[r][c] == greatest) {
        greatest_cnt++;
      }
    }
  }

  cout << greatest_cnt << endl;
}
