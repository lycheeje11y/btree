#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N;
  cin >> M;

  vector<vector<int>> checkpoints;
  for (int i = 0; i < M; i++) {
    int A, B;
    cin >> A;
    cin >> B;
    checkpoints.push_back({A, B});
  }

  vector<int> buf = {0, 0, 0};
  vector<int> distances;
  for (int i = 1; i < checkpoints.size(); i++) {
    vector<int> A = checkpoints[i];
    vector<int> B = checkpoints[i - 1];
    int distance = abs(A[0] - B[0]) + abs(A[1] - B[1]);
    distances.push_back(distance);

    if (distance > buf[0]) {
      buf[1] = buf[0];
      buf[0] = distance;
    } else if (distance > buf[1]) {
      buf[2] = buf[1];
      buf[1] = distance;
    } else if (distance > buf[2]) {
      buf[2] = distance;
    }
  }

  cout << buf[0] + buf[1] + buf[2] << endl;
}
