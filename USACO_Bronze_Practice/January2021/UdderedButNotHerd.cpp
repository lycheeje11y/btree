#include<iostream>
#include<vector>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
  string bet_input;
  cin >> bet_input;
  vector<char> bet(bet_input.begin(), bet_input.end());

  string heard_input;
  cin >> heard_input;
  vector<char> string(heard_input.begin(), heard_input.end());


  vector<int> values;

  for (char x : string) {
    int index = distance(bet.begin(), find(bet.begin(), bet.end(), x));
    values.push_back(index);
  }

  int cnt = 1;
  for (int i = 0; i < values.size()-1; i++) {
    if (values[i] > values[i+1]) {
      cnt++;
    }
  }

  cout << cnt << endl;
}
