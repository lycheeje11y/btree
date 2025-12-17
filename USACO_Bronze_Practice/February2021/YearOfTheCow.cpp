#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <vector>
using namespace std;

std::vector<std::string> animals = {"Ox",      "Tiger", "Rabbit", "Dragon",
				    "Snake",   "Horse", "Goat",   "Monkey",
				    "Rooster", "Dog",   "Pig",    "Rat"};

int find_index_distance(string animal, string direction,
			string other_cow_animal, int other_cow_distance) {
  int cnt = -1;

  auto it = find(animals.begin(), animals.end(), other_cow_animal);

  if (direction == "next") {
    int i = distance(animals.begin(), it);
    while (true) {
      if (i == 12) {
	i = 0;
      }
      if (animal == animals[i]) {
	return cnt;
      }
      i++;

      cnt++;
    }
  } else {
    int i = 11;
    while (true) {
      if (i == -1) {
	i = 11;
      }
      if (animal == animals[i]) {
	return cnt;
      }
      i--;
      cnt--;
    }
  }
}

int main() {
  int N;
  cin >> N;

  map<string, int> cows = {{"Bessie", 0}};
  map<string, int> distances = {{"Bessie", 0}};

  for (int i = 0; i < N; i++) {
    string cow;
    string other_cow;
    string direction;
    string animal;
    for (int word = 0; word < 8; word++) {
      string str;
      cin >> str;
      if (word == 0) {
	cow = str;
      } else if (word == 7) {
	other_cow = str;
      } else if (word == 3) {
	direction = str;
      } else if (word == 4) {
	animal = str;
      }
    }

    int distance = find_index_distance(
				       animal, direction, animals[cows[other_cow]], distances[other_cow]);

    cout << cow + " " + to_string(distance)  + " " + other_cow << endl;
    // cout << cow + " " + other_cow + " " + direction + " " + animal << endl;
  }
}
