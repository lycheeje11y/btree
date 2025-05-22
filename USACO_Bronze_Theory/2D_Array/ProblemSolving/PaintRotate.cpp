#include <iostream>
using namespace std;

vector<vector<char>> rotateCW(vector<vector<char>> arr) {
  vector<vector<char>> output;
  for (int r = arr.size() - 1; r > -1; --r) {
    vector<char> temp;
    int last = arr.size() - 1;
    for (int c = arr[0].size() - 1; c > -1; --c) {
      temp.push_back(arr[c][last - r]);
    }
    output.push_back(temp);
  }
  return output;
}

vector<vector<char>> rotateCCW(
    vector<vector<char>> arr) { // this is here for code readability purposes
  vector<vector<char>> output = arr;
  output = rotateCW(output);
  output = rotateCW(output);
  output = rotateCW(output);

  return output;
}

void print2DArray(vector<vector<char>> arr) {
  for (int r = 0; r < arr.size(); r++) {
    for (int c = 0; c < arr[0].size(); c++) {
      cout << arr[r][c];
    }
    cout << endl;
  }
}

int main() {
  int N, M;
  cin >> N;
  cin >> M;

  vector<vector<char>> arr;
  for (int r = 0; r < N; r++) {
    vector<char> temp;
    for (int c = 0; c < M; c++) {
      char input;
      cin >> input;

      temp.push_back(input);
    }
    arr.push_back(temp);
  }

  int R1, C1, R2, C2, rotations;
  string direction;
  cin >> R1;
  cin >> C1;
  cin >> R2;
  cin >> C2;
  cin >> direction;
  cin >> rotations;

  vector<vector<char>> target;
  for (int r = R1; r <= R2; r++) {
    vector<char> temp;
    for (int c = C1; c <= C2; c++) {
      temp.push_back(arr[r][c]);
    }
    target.push_back(temp);
  }

  for (int i = 1; i <= rotations; i++) {
    if (direction == "CW") {
      target = rotateCW(target);
    } else {
      target = rotateCCW(target);
    }
  }

  for (int r = R1; r <= R2; r++) {
    for (int c = C1; c <= C2; c++) {
      arr[r][c] = target[r - R1][c - C1];
    }
  }

  print2DArray(arr);
}
