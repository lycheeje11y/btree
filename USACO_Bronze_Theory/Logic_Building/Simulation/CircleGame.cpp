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
      cout << input << " ";
      board.push_back(input);
    }

    int loop = 0;

    int index = 0;
    int ans = -1;
    while (loop < 10) {
      if (index > board.size() - 1) {
        index -= board.size();
        loop++;
      }

      if (board[index] == 0) {
        ans = loop + 1;
        break;
      }

      index += board[index];
    }
    cout << ans << endl;
  }
}
