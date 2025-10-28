#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  int T;
  cin >> T;

  for (int test = 1; test <= T; test++) {
    vector<string> weekdays = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    string day;
    int daynumber;
    cin >> day;
    cin >> daynumber;

    int dayindex =
        find(weekdays.begin(), weekdays.end(), day) - weekdays.begin();
    if (daynumber < 13) {
      while (daynumber != 13) {
        daynumber++;
        if (dayindex == 6) {
          dayindex = 0;
        } else {
          dayindex++;
        }
      }
    } else if (daynumber > 13) {
      while (daynumber != 13) {
        daynumber--;

        if (dayindex == 0) {
          dayindex = 6;
        } else {
          dayindex--;
        }
      }
    }

    if (dayindex == 4) {
      cout << "Yes";
    } else {
      cout << "No";
    }
    cout << endl;
  }

  return 0;
}
