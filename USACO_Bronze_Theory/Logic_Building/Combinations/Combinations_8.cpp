#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<string> names;
  vector<string> surnames;
  vector<int> ages;

  for (int i = 0; i < N; i++) {
    string input;
    cin >> input;
    names.push_back(input);
  }

  for (int i = 0; i < N; i++) {
    string input;
    cin >> input;
    surnames.push_back(input);
  }
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;
    ages.push_back(input);
  }

  for (int a = 0; a < N; a++) {
    for (int b = 0; b < N; b++) {
      for (int c = 0; c < N; c++) {
        cout << "Name: " << names[a] << " " << surnames[b]
             << ", Age: " << ages[c];
      }
    }
  }
}
