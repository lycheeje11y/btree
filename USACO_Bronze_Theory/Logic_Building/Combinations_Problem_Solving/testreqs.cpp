#include <iostream>

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

int main() { cout << checkReqs("123456789112345HH"); }
