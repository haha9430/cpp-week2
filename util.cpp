#include <iostream>
#include <random>
#include <string>
#include <ctime>

using namespace std;

string makeN() {
    string n;
    string nElement;
    
    mt19937_64 gen((unsigned int)time(NULL));
    uniform_int_distribution<int> dis(0, 9);

    for(int i = 0; i < 3; i++) {
        string nElement = to_string(dis(gen));
        n += nElement;
    }

    return n;
}
