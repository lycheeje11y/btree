#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<string> weekdays = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
  vector<string> months = {"Jan",  "Feb", "Mar", "Apr", "May", "Jun",
                           "July", "Aug", "Sep", "Oct", "Nov", "Dec"};

  vector<int> month_days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  string month, day;
  cin >> month;
  cin >> day;

  vector<int> ans = {0, 0, 0, 0, 0, 0, 0};

  int index = find(months.begin(), months.end(), month) - months.begin();
  int daystotal = month_days[index];

  int currentday =
      find(weekdays.begin(), weekdays.end(), day) - weekdays.begin();
  for (int i = 0; i < daystotal; i++) {
    if (currentday == 7) {
      currentday = 0;
    }

    ans[currentday]++;

    currentday++;
  }

  for (int i : ans) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
