#include <iostream>
#include <vector>

using namespace std;

bool checkDiffGreaterThanFive(vector<int> arr) {
  int greatest = 0;
  int smallest = 500000000;

  for (int i : arr) {
    if (i > greatest) {
      greatest = i;
    }
    if (i < smallest) {
      smallest = i;
    }
  }

  return (greatest - smallest > 5);
}

int main() {
  int a, b, c, d;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;

  int cnt = 0;
  for (int x = 1; x <= a; x++) {
    for (int y = 1; y <= b; y++) {
      for (int z = 1; z <= c; z++) {
        for (int zz = 1; zz <= d; zz++) {
          if (x != y && x != z && x != zz && y != z && y != zz && z != zz) {
            vector<int> arr = {x, y, z, zz};
            if (checkDiffGreaterThanFive(arr))
              cnt++;
          }
        }
      }
    }
  }
  cout << cnt << endl;
  return 0;
}
