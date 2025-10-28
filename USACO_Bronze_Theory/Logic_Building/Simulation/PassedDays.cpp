#include <iostream>

using namespace std;

bool isLeapYear(int year) {
  if (year % 100 == 0 && year % 400 != 0)
    return false;
  else if (year % 4 == 0)
    return true;
  else
    return false;
}

int main() {
  int N;
  cin >> N;

  int cnt = 0;
  int year = 2000;

  while (year < N) {
    year++;
    if (isLeapYear(year))
      cnt += 366;
    else
      cnt += 365;
  }

  cout << cnt + 1 << endl; // sigh idk either
}
