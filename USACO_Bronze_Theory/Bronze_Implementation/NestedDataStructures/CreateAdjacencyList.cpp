#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  map<int, vector<int>> adj;
  for (int i = 0; i < N; i++) {
    int A, B;
    cin >> A;
    cin >> B;

    adj[A].push_back(B);
    adj[B].push_back(A);
  }
  cout << "0: []" << endl;
  for (auto ma : adj) {
    cout << to_string(ma.first) + ": [";

    for (int i = 0; i < ma.second.size() - 1; i++) {
      cout << to_string(ma.second[i]) + ", ";
    }

    cout << ma.second[ma.second.size() - 1] << "]" << endl;
  }
}
