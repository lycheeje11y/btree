#include <iostream>
#include <string>
#include <vector>

using namespace std;

int _calculate_manhattann_distance(vector<int> lhs, vector<int> rhs) {
  return abs(lhs[0] - rhs[0]) + abs(lhs[1] - rhs[1]);
}

int calculate_route_distance(vector<int> a, vector<int> b, vector<int> c) {
  return _calculate_manhattann_distance(a, b) +
         _calculate_manhattann_distance(b, c);
}

int main() {
  int A, B, C;
  cin >> A;
  cin >> B;
  cin >> C;

  vector<vector<int>> starting_points;
  for (int i = 0; i < A; i++) {
    int one, two;
    cin >> one;
    cin >> two;

    starting_points.push_back({one, two});
  }

  vector<vector<int>> checkpoints;
  for (int i = 0; i < B; i++) {
    int one, two;
    cin >> one;
    cin >> two;

    checkpoints.push_back({one, two});
  }
  vector<vector<int>> ending_points;
  for (int i = 0; i < B; i++) {
    int one, two;
    cin >> one;
    cin >> two;

    ending_points.push_back({one, two});
  }

  int smallest = 500000;
  string ans = "";
  for (int a = 0; a < starting_points.size(); a++) {
    for (int b = 0; b < checkpoints.size(); b++) {
      for (int c = 0; c < ending_points.size(); c++) {
        int distance = calculate_route_distance(
            starting_points[a], checkpoints[b], ending_points[c]);
        if (distance < smallest) {
          smallest = distance;
          ans = to_string(starting_points[a][0]) + "," +
                to_string(starting_points[a][1]) + " -> " +
                to_string(checkpoints[b][0]) + "," +
                to_string(checkpoints[b][1]) + " -> " +
                to_string(ending_points[c][0]) + "," +
                to_string(ending_points[c][1]);
        }
      }
    }
  }
  cout << ans << endl;
}
