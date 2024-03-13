#include <iostream>
using namespace std;

int isStrike(int answer, int guess);
int isBall(int answer, int guess);

int main() {
    int answer; // 정답
    int guess; // 사용자의 대답
    int strike = 0; // 스트라이크의 개수
    int ball = 0; // 볼의 개수
    
    cout << "Enter a answer: ";
    cin >> answer;

    while(true) {
        cout << "Enter a guess: ";
        cin >> guess;
        
        if (guess == -1) { break; }
        if (answer == guess) {
            break;
        }else {
            cout << "Strikes: " << isStrike(answer, guess) << ", " << "Balls: " << isBall(answer, guess) << endl;
        }
    }

    cout << "You win!" << endl;

    return 0;
}