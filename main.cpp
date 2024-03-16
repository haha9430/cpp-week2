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

  cout << "Enter a answer: ";
  cin >> answer;

  while (true) {
    cout << "Enter a guess: ";
    cin >> guess;

    if (answer.compare(guess) == 0) {
      break;
    } else {
      cout << "Strikes: " << isStrike(answer, guess) << ", "<< "Balls: " << isBall(answer, guess) << endl;
    }
  }

  cout << "You win!" << endl;

  return 0;
}