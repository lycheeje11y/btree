#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<char> one;
  for (int i = 0; i < N; i++) {
    char input;
    cin >> input;
    one.push_back(input);
  }

  vector<char> two;
  for (int i = 0; i < N; i++) {
    char input;
    cin >> input;
    two.push_back(input);
  }

  set<string> substrings;
  for (int a = 0; a < N; a++) {
    for (int b = 0; b < N; b++) {
      substrings.insert(to_string(one[a]) + to_string(two[b]));
    }
  }

  cout << substrings.size() << endl;
}
