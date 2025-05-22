#include <vector>
using namespace std;

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

vector<vector<int>> combineArrays(
    vector<vector<int>> lhs,
    vector<vector<int>> rhs) { // asumming lhs and rhs are the same size
  vector<vector<int>> output;

  for (int r = 0; r < lhs.size(); r++) {
    vector<int> temp;
    for (int c = 0; c < rhs.size(); c++) {
      if (rhs[r][c] == 1) {
        temp.push_back(rhs[r][c]);
      } else {
        temp.push_back(lhs[r][c]);
      }
    }
    output.push_back(temp);
  }

  return output;
}

void print2DArray(vector<vector<int>> arr) {
  for (int r = 0; r < arr.size(); r++) {
    for (int c = 0; c < arr[0].size(); c++) {
      cout << arr[r][c];
    }
    cout << endl;
  }
}

int main() {
  int N;
  cin >> N;

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

  vector<vector<int>> result = arr;
  for (int i = 0; i < 3; i++) {
    result = combineArrays(result, rotateCW(result));
  }

  print2DArray(result);
}
