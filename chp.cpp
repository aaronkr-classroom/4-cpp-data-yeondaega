// chp3ex0.cpp
// 중간고사, 기말고사, 그리고 과제 점수 몇개를 받고
// 마지막 평균 결과 점수를 계산하기.
#include <iostream>
#include <string>

using std::cin;	using std::setprecision; // 실수 숫자 길이 정의
using std::cout; using std::string;
using std::endl; using std::streamsize;

int main() {
	// 학생의 이름을 묻고 입력받기
	cout << "Your name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	// 중간고사와 기말고사 점수를 묻고 입력받기
	cout << "Midterm & Final scores: ";
	double midterm, final; // double = 최소 10자리까지, 보통 15자리까지
	cin >> midterm >> final;

	// 과제 점수를 물음
	cout << "Enter all homework grades "
		"followed by EOF: "; // End-Of-File
	vector<string> words;
	string max = "";
		string min = " "; 

	// 지금까지 입력된 과제 점수의 개수와 합
	int count = 0; // 과제 몇개? 
	double sum = 0; // 합 결과 - 0.0 = double, 0 = int 자동 병경함

	// 입력을 위한 변수
	string word;
	while (cin >> word) {
		words.push_back(word);
	}


	//크기확인
	if (word.size() < min.size()) min = word;
	else if (word.size() > max.size()) max = word;
	}

	// 결과를 출력
cout << " Words: " << words.size();

//계산
for () {
	if (/*words 백터에 있으면*/)
		

	return 0;
} // main 끝