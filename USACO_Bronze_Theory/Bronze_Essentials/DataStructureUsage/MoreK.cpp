#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int test = 1; test <= T; test++) {
    int N, K;
    cin >> N;
    cin >> K;

    vector<int> arr;
    for (int i = 0; i < N; i++) {
      int input;
      cin >> input;
      arr.push_back(input);
    }

    vector<int> queries;
    for (int i = 0; i < K; i++) {
      int input;
      cin >> input;
      queries.push_back(input);
    }

    for (int query : queries) {
      int length = arr.size();
      for (int i = 0; i < length; i++) {
        if (arr[i] == query) {
          arr.push_back(query);
        }
      }
    }

    for (int i : arr) {
      cout << i << " ";
    }
    cout << endl;
  }
}
