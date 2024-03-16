#include <iostream>
using namespace std;

int isStrike(string answer, string guess) {
    int arrayAnswer[3];
    int arrayGuess[3];
    int strike = 0;

    arrayAnswer[0] = answer[0] - '0';
    arrayAnswer[1] = answer[1] - '0';
    arrayAnswer[2] = answer[2] - '0';

    arrayGuess[0] = guess[0] - '0';
    arrayGuess[1] = guess[1] - '0';
    arrayGuess[2] = guess[2] - '0';

    for(int i = 0; i < 3; i++) {
        if(arrayAnswer[i] == arrayGuess[i]) {
            strike += 1;
        }
    }

    return strike;
}

int isBall(string answer, string guess) {
    int arrayAnswer[3];
    int arrayGuess[3];
    int ball = 0;

    arrayAnswer[0] = answer[0] - '0';
    arrayAnswer[1] = answer[1] - '0';
    arrayAnswer[2] = answer[2] - '0';

    arrayGuess[0] = guess[0] - '0';
    arrayGuess[1] = guess[1] - '0';
    arrayGuess[2] = guess[2] - '0';

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arrayAnswer[i] == arrayGuess[j]) {
                if (i != j) {
                    ball += 1;
                }
            }
        }
    }

    return ball;
}