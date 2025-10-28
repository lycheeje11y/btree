#include <iostream>
#include <vector>

using namespace std;

int first_monday(int N) {
  int ans = N;
  while (ans > 0) {
    ans -= 7;
  }

  return ans + 7;
}

int main() {

  vector<string> weekdays = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
  vector<string> months = {"Jan",  "Feb", "Mar", "Apr", "May", "Jun",
                           "July", "Aug", "Sep", "Oct", "Nov", "Dec"};

  vector<int> daysinmonths = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int N;
  cin >> N;

  vector<int> ans = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  int currentmonday = first_monday(N);
  for (int i = 0; i < months.size(); i++) {
    int totaldays = daysinmonths[i];

    while (true) {
      currentmonday += 7;

      if (currentmonday > totaldays) {
        currentmonday -= totaldays;
        ans[i]++;
        break;
      }

      ans[i]++;
    }
  }

  for (int i : ans) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
