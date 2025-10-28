#include <iostream>
#include <vector>

using namespace std;

int main() {
  int target_left;
  cin >> target_left;

  vector<int> coins = {50, 25, 10, 5, 1};

  int cnt = 1; // idk why i have to set this to one instead of zero ok
  while (true) {
    if (target_left > 50)
      target_left -= 50;
    else if (target_left > 25)
      target_left -= 25;
    else if (target_left > 10)
      target_left -= 10;
    else if (target_left > 5)
      target_left -= 5;
    else if (target_left > 1)
      target_left -= 1;
    else
      break;

    cnt++;
  }
  cout << cnt << endl;
}
