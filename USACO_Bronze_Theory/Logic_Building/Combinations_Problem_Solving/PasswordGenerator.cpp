#include <iostream>
#include <set>
#include <vector>

using namespace std;

bool checkReqs(string password) {
  if (password.size() < 15) {
    return false;
  }

  bool noLowercase = true;
  for (char c : password) {
    if (97 <= c && c <= 122) {
      noLowercase = false;
      break;
    }
  }
  if (noLowercase) {
    return false;
  }

  bool noUppercase = true;
  for (char c : password) {
    if (65 <= c && c <= 90) {
      noUppercase = false;
      break;
    }
  }
  if (noUppercase) {
    return false;
  }

  return true;
}

int main() {
  int N, M, K;
  cin >> N;
  cin >> M;
  cin >> K;

  vector<string> adjectives;
  for (int i = 0; i < N; i++) {
    string input;
    cin >> input;
    adjectives.push_back(input);
  }

  vector<string> nouns;
  for (int i = 0; i < M; i++) {
    string input;
    cin >> input;
    nouns.push_back(input);
  }

  set<string> found;
  for (int a = 0; a < N; a++) {
    for (int b = 0; b < M; b++) {
      for (int c = 1; c <= K; c++) {
        string pass = adjectives[a] + "-" + nouns[b] + "-" + to_string(c);

        if (checkReqs(pass)) {
          found.insert(pass);
        }
      }
    }
  }

  cout << found.size() << endl;

  return 0;
}
