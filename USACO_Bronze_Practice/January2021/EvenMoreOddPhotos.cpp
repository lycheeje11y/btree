#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  int even = 0;
  int odd = 0;

  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;

    if (input % 2 == 0)
      even++;
    else
      odd++;
  }

  int cnt = 0;

  bool lf_even = true; // look for even
  while (true) {
    // cout << "even: " + to_string(even) + " ";
    // cout << "odd: " + to_string(odd);
    // cout << endl;
    if (lf_even) {
      if (even > 0) {
	even--;
	cnt++;
	lf_even = false;
      } else if (odd >= 2) {
	odd -= 2;
	cnt++;
	lf_even = false;
      } else
	break;
    } else {
      if (odd > 0) {
	odd--;
	cnt++;
	lf_even = true;
      } else
	break;
    }
  }

  if (odd > 0) {
    cnt--;
  }
  cout << cnt << endl;
}
