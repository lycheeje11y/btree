#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int T;
  cin >> T;
  for (int test = 0; test < T; test++) {
    int N;
    cin >> N;

    vector<vector<int>> meetings;
    for (int i = 0; i < N; i++) {
      int A, B;
      cin >> A;
      cin >> B;
      meetings.push_back({B, A});
    }

    sort(meetings.begin(), meetings.end());

    vector<int> occupied_hours;
    int ans = 0;
    for (vector<int> meeting : meetings) {
      bool usable = true;
      for (int i = meeting[1]; i < meeting[0]; i++) {
        if (find(occupied_hours.begin(), occupied_hours.end(), i) !=
            occupied_hours.end()) {
          usable = false;
          break;
        }
      }

      if (usable) {

        for (int i = meeting[1]; i < meeting[0]; i++) {
          occupied_hours.push_back(i);
        }

        ans++;
      }
    }

    cout << ans << endl;
  }
}
