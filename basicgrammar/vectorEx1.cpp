#include<iostream>
#include<vector>	//vector란 가변 크기의 배열을 나타낸다
// 동적으로 크기가 조정될 수 있는 성질이 있다.

using namespace std;

int main() {
	
	vector<int> myvector;		//비어 있는 정수 벡터
	vector<double> doublevectorc(10);	//크기가 10이고 모든 요소가 0.0인 double형 벡터
	vector<string> strvector{ "apple", "banana", "cherry" };


	cout << strvector[0] << endl;
	strvector.push_back("data"); //push_back()을 통해 새로운 요소를 끝에 추가
	strvector.pop_back(); //끝에 있는 요소 제거

	cout << "size of vector is : " << strvector.size() << endl; //현재 벡터의 크기를 출력
	cout << "capacity of vector is : " << strvector.capacity() << endl; // 벡터의 용량 출력

	for (auto it = strvector.begin(); it != strvector.end(); it++)
		cout << *it << " ";

	//이렇게 2차원 벡터 선언도 가능
	vector<vector<int>> matrix;

	return 0;
}
