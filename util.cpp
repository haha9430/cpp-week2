#include <iostream>
#include <random>
#include <string>
#include <ctime>

using namespace std;

string makeN() {
  string n;
  string nElement;
  int arrayN[3];

  mt19937_64 gen((unsigned int)time(NULL));
  uniform_int_distribution<int> dis(0, 9);

  for (int i = 0; i < 3; i++) {
    arrayN[i] = dis(gen);
    // string nElement = to_string(dis(gen));
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == j) {
        continue;
      } else {
        while (arrayN[i] == arrayN[j]) {
          arrayN[j] = dis(gen);
        }
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    nElement = to_string(arrayN[i]);
    n += nElement;
  }

  return n;
}
