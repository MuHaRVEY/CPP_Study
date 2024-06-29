#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {

	//time(nullptr)을 통해 현재 시스템 시간을 현재 시간 기준으로 가져온다.
	//static_cast를 통해 unsigned int 형으로 형 변환한다.
	//srand를 통해 현재 시간의 usgined int 형 값을 시드로 설정하므로
	//프로그램 실행시마다 값이 달라질 것이다.
	srand(static_cast<unsigned int>(time(nullptr)));
	// srand()를 통해 시드 값을 설정하였다면,
	// 이를 기반으로 난수를 생성하는 rand() 함수를 쓴다.
	// 기억하자, 순서는 srand() 다음에 rand()
	int randomNumber = rand() % 100 + 1;

	vector<int> guesses; // 사용자의 추측 기록 저장용 벡터
	cout << "=========================================================================" << endl;
	cout << "숫자 맞추기 게임을 시작합니다. 1부터 100사이의 숫자 중 답을 맞춰보세요." << endl;
	
	while (true) {
		int guess;
		cout << " 숫자를 입력하세요 : ";
		cin >> guess;

		if (guess < 1 || guess > 100) {
			cout << "1~100 중에서 숫자를 입력하세요." << endl;
			continue;
		}

		guesses.push_back(guess); //추측한 값을 vector에 저장

		if (guess == randomNumber) {
			cout << "정답입니다!" << endl;
			break;
		}
		else if (guess < randomNumber) {
			cout << "정답은 더 큰 숫자입니다." << endl;
			cout << "-------------------\n";
		}
		else {
			cout << "정답은 더 작은 숫자입니다." << endl;
			cout << "-------------------\n";
		}

		cout << "현재 까지의 추측 기록: ";
		for (auto num : guesses) { // ":" 이 키워드 기준 왼쪽은 반복할 변수, 오른쪽은 순회한 컨테이너!
			cout << " " << num;
		}
		cout << endl;
	}
	
	return 0;
}
