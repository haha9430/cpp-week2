#include <iostream>
#include <random>
#include <string>
using namespace std;

string makeN() {
    string n;
    string nElement;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, 9);

    for(int i = 0; i < 3; i++) {
        string nElement = to_string(dis(gen));
        n += nElement;
    }

    return n;
}