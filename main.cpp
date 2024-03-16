#include <iostream>
#include <string>
using namespace std;

int isStrike(string answer, string guess);
int isBall(string answer, string guess);
string makeN();

int main() {
  string answer;  // 정답
  string guess;   // 사용자의 대답
  int strike = 0; // 스트라이크의 개수
  int ball = 0;   // 볼의 개수
  int turnN = 5;

  answer = makeN();

  while (turnN > 0) {
    cout << turnN << " chances left." << endl;
    cout << "Enter a guess: ";
    cin >> guess;

    if (answer.compare(guess) == 0) {
      cout << "You win!" << endl;
      break;
    } else {
      cout << "Strikes: " << isStrike(answer, guess) << ", "<< "Balls: " << isBall(answer, guess) << endl;
    }
    turnN--;
    if (turnN == 0) {
      cout << "You lose!" << endl;
    }
  }



  return 0;
}