#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  for (int x = 1; x <= N; x++) {
    for (int y = 1; y <= N; y++) {
      for (int z = 1; z <= N; z++) {
        if (x != y && x != z && y != z) {
          if (x + y + z == 10) {
            cout << x << " " << y << " " << z << endl;
          }
        }
      }
    }
  }
}
