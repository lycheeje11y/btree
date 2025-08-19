#include <iostream>
#include <vector>
using namespace std;

vector<int> check(vector<int> arr) {
  bool rerun = false;
  vector<int> result;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] + arr[i + 1] + arr[i + 2] != 10 || i == arr.size() - 1) {
      result.push_back(arr[i]);
    } else {
      i += 2;
      if (i >= arr.size()) {
        break;
      }
      rerun = true;
    }
  }

  if (rerun) {
    return check(result);
  }
  return result;
}

int main() {
  int N;
  cin >> N;

  vector<int> arr;
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;
    arr.push_back(input);
  }

  vector<int> result = check(arr);

  for (int i : result) {
    cout << i << " ";
  }
  cout << endl;
}
