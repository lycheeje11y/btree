#include <iostream>
using namespace std;

void print2DArray(vector<vector<int>> arr) {
  for (int r = 0; r < arr.size(); r++) {
    for (int c = 0; c < arr[0].size(); c++) {
      cout << arr[r][c];
    }
    cout << endl;
  }
}

vector<vector<int>> rotateCW(vector<vector<int>> arr) {
  vector<vector<int>> output;
  for (int r = arr.size() - 1; r > -1; --r) {
    vector<int> temp;
    int last = arr.size() - 1;
    for (int c = arr[0].size() - 1; c > -1; --c) {
      temp.push_back(arr[c][last - r]);
    }
    output.push_back(temp);
  }
  return output;
}

bool compare(vector<vector<int>> lhs, vector<vector<int>> rhs) {
  for (int r = 0; r < lhs.size(); r++) {
    for (int c = 0; c < lhs[0].size(); c++) {
      // c;;;;out << lhs[r][c] << " ";
      // cout << rhs[r][c] << endl;
      if (lhs[r][c] != rhs[r][c]) {
        return false;
      }
    }
  }

  // print2DArray(rhs);
  // cout << endl;
  // print2DArray(lhs);
  // cout << "---------------" << endl;
  return true;
}

bool compareAllRotations(vector<vector<int>> lhs, vector<vector<int>> rhs) {
  vector<vector<int>> target = lhs;
  for (int rotes = 0; rotes < 4; rotes++) {
    if (rotes != 0) {
      target = rotateCW(target);
    }

    for (int r = 0; r < lhs.size(); r++) {
      for (int c = 0; c < lhs[0].size(); c++) {
        if (compare(target, rhs)) {
          // cout << "+1";
          return true;
        }
      }
    }
  }
  return false;
}

bool checkFromPoint(vector<vector<int>> lhs, vector<vector<int>> rhs,
                    int startRow, int startCol) {
  vector<vector<int>> subarray;
  for (int r = startRow; r < startRow + lhs.size(); r++) {
    vector<int> temp;
    for (int c = startCol; c < startCol + lhs[0].size(); c++) {
      temp.push_back(rhs[r][c]);
    }

    subarray.push_back(temp);
  }

  if (compareAllRotations(lhs, subarray)) {
    return true;
  } else {
    return false;
  }
}

int getInstancesOfIn(
    vector<vector<int>> lhs,
    vector<vector<int>> rhs) { // where lhs is the "target" array, and rhs
                               // is the "big" array
  int cnt = 0;

  for (int r = 0; r < rhs.size() - 1; r++) {
    for (int c = 0; c < rhs[0].size() - 1; c++) {
      if (checkFromPoint(lhs, rhs, r, c)) {
        cnt++;
      }
    }
  }

  return cnt;
}

int main() {
  int N, M;
  cin >> N;
  cin >> M;

  vector<vector<int>> arr;
  for (int r = 0; r < N; r++) {
    vector<int> temp;
    for (int c = 0; c < N; c++) {
      int input;
      cin >> input;
      temp.push_back(input);
    }
    arr.push_back(temp);
  }

  vector<vector<int>> target;
  for (int r = 0; r < M; r++) {
    vector<int> temp;
    for (int c = 0; c < M; c++) {
      int input;
      cin >> input;
      temp.push_back(input);
    }
    target.push_back(temp);
  }

  cout << getInstancesOfIn(target, arr);

  return 0;
}
