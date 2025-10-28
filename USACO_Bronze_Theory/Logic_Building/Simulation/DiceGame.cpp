#include <iostream>
#include <vector>

using namespace std;

bool check(int turn, vector<int> board) {
  bool ans = false;
  while (turn < board.size()) {
    if (board[turn] == 0) {
      ans = true;
      break;
    }
    turn += board[turn];
  }
  return ans;
}

int main() {
  int N, M;
  cin >> N;
  cin >> M;

  vector<int> board;
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;
    board.push_back(input);
  }

  vector<int> die;
  for (int i = 0; i < M; i++) {
    int input;
    cin >> input;
    die.push_back(input);
  }

  for (int dice : die) {
    int cnt = 0;
    for (int i = 0; i < dice; i++) {
      if (check(i, board)) {
        cnt++;
      }
    }
    cout << cnt << endl;
  }
}
