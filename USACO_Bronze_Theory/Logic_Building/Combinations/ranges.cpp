#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<vector<int>> switches;
  for (int r = 0; r < 10; r++) {
    vector<int> temp;
    for (int c = 0; c < 2; c++) {
      int input;
      cin >> input;
      temp.push_back(input);
    }
    switches.push_back(temp);
  }

  int largest = 0;
  for (int i1 = 0; i1 < 2; i1++) {

    for (int i2 = 0; i2 < 2; i2++) {

      for (int i3 = 0; i3 < 2; i3++) {

        for (int i4 = 0; i4 < 2; i4++) {

          for (int i5 = 0; i5 < 2; i5++) {

            for (int i6 = 0; i6 < 2; i6++) {

              for (int i7 = 0; i7 < 2; i7++) {

                for (int i8 = 0; i8 < 2; i8++) {

                  for (int i9 = 0; i9 < 2; i9++) {

                    for (int i10 = 0; i10 < 2; i10++) {
                      vector<int> combinations = {i1, i2, i3, i4, i5,
                                                  i6, i7, i8, i9, i10};

                      vector<int> on;

                      for (int i = 0; i < combinations.size(); i++) {
                        if (combinations[i]) {
                          for (int j = switches[i][0]; j <= switches[i][1];
                               j++) {
                            if (find(on.begin(), on.end(), j) == on.end()) {
                              on.push_back(j);
                            } else {
                              on = {};
                            }
                          }
                        }
                      }

                      if (on.size() > largest) {
                        largest = on.size();
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  cout << largest << endl;

  // for (int r = 0; r < switches.size(); r++) {
  //   for (int c = 0; c < switches[0].size(); c++) {
  //     cout << switches[r][c] << " ";
  //   }
  //   cout << endl;
  // }
}
