#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, M;
  cin >> N;
  cin >> M;
  for (int i = 0; i < N; i++) {
    vector<int> board;

    for (int j = 0; j < M; j++) {
      int input;
      cin >> input;
      board.push_back(input);
    }

    int turn = 0;
    string ans = "No";
    while (turn < board.size()) {
      if (board[turn] == 0) {
        ans = "Yes";
        break;
      }
      turn += board[turn];
    }
    cout << ans << endl;
  }
}
