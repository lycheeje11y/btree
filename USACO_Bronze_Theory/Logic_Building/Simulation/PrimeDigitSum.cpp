#include <iostream>

using namespace std;

bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }
  if (n <= 3) {
    return true;
  }
  if (n % 2 == 0 || n % 3 == 0) {
    return false;
  }
  for (int i = 5; i * i <= n; i = i + 6) {
    if (n % i == 0 || n % (i + 2) == 0) {
      return false;
    }
  }
  return true;
}

int digitSum(int v) {
  int sum = 0;
  for (char i : to_string(v)) {
    sum += i - '0';
  }
  return sum;
}

int main() {
  int N;
  cin >> N;

  int cnt = 0;
  for (int i = 1; i <= N; i++) {
    if (isPrime(digitSum(i))) {
      cnt++;
    }
  }

  cout << cnt << endl;
}
