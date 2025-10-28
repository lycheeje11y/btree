#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
  int N, M;
  cin >> N;
  cin >> M;

  map<char, set<char>> list;

  for (int i = 0; i < N; i++) {
    char A, B;
    cin >> A;
    cin >> B;

    if (list.find(A) == list.end())
      list.insert({A, {B}});
    else
      list[A].insert(B);

    if (list.find(B) == list.end())
      list.insert({B, {A}});
    else
      list[B].insert(A);
  }

  int ans = 0;
  for (auto v : list) {
    if (v.second.size() > M) {
      ans++;
    }
  }

  cout << ans << endl;
}
