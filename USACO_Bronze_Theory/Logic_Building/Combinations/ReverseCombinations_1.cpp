#include <iostream>
#include <set>

using namespace std;

int main() {
  int N;
  cin >> N;

  for (int x = N; x > 0; x--) {
    for (int y = N; y > 0; y--) {
      for (int z = N; z > 0; z--) {
        if (x != y && x != z && y != z) {
          if (x + y + z == 10) {
            cout << x << " " << y << " " << z << endl;
          }
        }
      }
    }
  }
}
