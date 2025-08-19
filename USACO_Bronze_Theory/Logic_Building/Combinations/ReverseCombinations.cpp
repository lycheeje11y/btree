#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  for (int x = N; x > 0; x--) {
    for (int y = N; y > 0; y--) {
      for (int z = N; z > 0; z--) {
        cout << x << " " << y << " " << z << endl;
      }
    }
  }
}
