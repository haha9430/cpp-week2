#include <iostream>
using namespace std;
int *makeArray(int n);

int isStrike(int answer, int guess) {
    int arrayAnswer[3];
    int arrayGuess[3];
    int strike = 0;

    arrayAnswer[0] = answer / 100;
    arrayAnswer[1] = (answer - arrayAnswer[0] * 100) / 10;
    arrayAnswer[2] = (answer - arrayAnswer[0] * 100 - arrayAnswer[1] * 10);

    arrayGuess[0] = guess / 100;
    arrayGuess[1] = (guess - arrayGuess[0] * 100) / 10;
    arrayGuess[2] = (guess - arrayGuess[0] * 100 - arrayGuess[1] * 10);

    for(int i = 0; i < 3; i++) {
        if(arrayAnswer[i] == arrayGuess[i]) {
            strike += 1;
        }
    }

    return strike;
}

int isBall(int answer, int guess) {
    int arrayAnswer[3];
    int arrayGuess[3];
    int ball = 0;

    arrayAnswer[0] = answer / 100;
    arrayAnswer[1] = (answer - arrayAnswer[0] * 100) / 10;
    arrayAnswer[2] = (answer - arrayAnswer[0] * 100 - arrayAnswer[1] * 10);

    arrayGuess[0] = guess / 100;
    arrayGuess[1] = (guess - arrayGuess[0] * 100) / 10;
    arrayGuess[2] = (guess - arrayGuess[0] * 100 - arrayGuess[1] * 10);

    if (arrayAnswer[0] == arrayGuess[1] || arrayAnswer[0] == arrayGuess[2]) {
        ball += 1;
    }
    if (arrayAnswer[1] == arrayGuess[0] || arrayAnswer[1] == arrayGuess[2]) {
        ball += 1;
    }
    if (arrayAnswer[2] == arrayGuess[0] || arrayAnswer[2] == arrayGuess[1]) {
        ball += 1;
    }

    return ball;
}