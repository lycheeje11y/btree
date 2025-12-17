#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> nums;
  for (int i = 0; i < 7; i++) {
    int input;
    cin >> input;

    nums.push_back(input);
  }

  sort(nums.begin(), nums.end());

  int A = nums[0];
  int B = nums[1];
  int C = nums[6] - A - B;

  cout << to_string(A) + " " + to_string(B) + " " + to_string(C) << endl;
}
