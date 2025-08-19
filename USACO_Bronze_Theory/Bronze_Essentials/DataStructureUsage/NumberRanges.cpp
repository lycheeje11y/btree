#include <iostream>
using namespace std;

int main() {
  int N, K;
  cin >> N;
  cin >> K;

  int ar[N] = {};
  for (int i = 0; i < K; i++) {
    int A, B;
    cin >> A;
    cin >> B;

    for (int i = A; i <= B; i++) {
      ar[i - 1]++;
    }
  }

  //  for (int i : ar) {
  //    cout << i << endl;
  //   }

  int greatest = 0;
  int sum = 0;
  for (int i = 0; i < N; i++) {
    if (ar[i] == greatest) {
      sum += i + 1;
      //      cout << "Added: " << i + 1 << endl;

    } else if (ar[i] > greatest) {
      greatest = ar[i];
      sum = i + 1;
      //      cout << "Redone: " << i + 1 << endl;
    }
    //    cout << "Sum:" << sum << endl;
  }

  cout << sum << endl;
  return 0;
}
