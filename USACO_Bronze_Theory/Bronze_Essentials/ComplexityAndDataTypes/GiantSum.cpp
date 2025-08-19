#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  long int sum = 0;
  for (int i = 0; i < N; i++) {
    long int input;
    cin >> input;

    sum += input;
  }

  cout << sum;

  return 0;
}
