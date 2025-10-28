#include <iostream>
#include <set>
#include <vector>

using namespace std;

string checkReqs(string password) {
  int strength = 0;

  if (password.size() >= 15) {
    strength++;
  }

  int lowercase_sum = 0;
  for (char c : password) {
    if (97 <= c && c <= 122) {
      lowercase_sum++;
    }
  }
  if (lowercase_sum >= 3) {
    strength++;
  }

  int uppercase_sum = 0;
  for (char c : password) {
    if (65 <= c && c <= 90) {
      uppercase_sum++;
    }
  }
  if (uppercase_sum >= 3) {
    strength++;
  }

  if (lowercase_sum >= 1 && uppercase_sum >= 1) {
    strength++;
  }

  set<char> letters;
  for (char x : password) {
    if (isalpha(x))
      letters.insert(x);
  }

  if (letters.size() >= 10) {
    strength++;
  }

  if (strength == 1) {
    return "weak";
  } else if (strength == 2 || strength == 3 || strength == 4) {
    return "medium";
  } else if (strength == 5) {
    return "strong";
  } else {
    return "invalid";
  }
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

  int weak = 0;
  int medium = 0;
  int strong = 0;

  set<string> used;
  for (int a = 0; a < N; a++) {
    for (int b = 0; b < M; b++) {
      for (int c = 1; c <= K; c++) {
        string pass = adjectives[a] + "-" + nouns[b] + "-" + to_string(c);

        if (used.find(pass) == used.end()) {
          used.insert(pass);
          string check = checkReqs(pass);
          if (check == "weak")
            weak++;
          else if (check == "medium")
            medium++;
          else if (check == "strong")
            strong++;
        }
      }
    }
  }

  cout << weak << " " << medium << " " << strong << endl;

  return 0;
}
