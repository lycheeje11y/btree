#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> people;
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;
    people.push_back(input);
  }

  vector<int> cookies;
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;
    cookies.push_back(input);
  }

  int ans = -2;
  for (int person = 0; person <= N; person++) {
    int requirement = people[person];
    for (int pack = 0; pack <= N; pack++) {
      if (requirement < 0) {
        break;
      }

      requirement -= cookies[pack];
    }
    ans++;
  }

  cout << ans << endl;
}
