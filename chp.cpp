// chp3ex0.cpp
// �߰����, �⸻���, �׸��� ���� ���� ��� �ް�
// ������ ��� ��� ������ ����ϱ�.
#include <iostream>
#include <string>

using std::cin;	using std::setprecision; // �Ǽ� ���� ���� ����
using std::cout; using std::string;
using std::endl; using std::streamsize;

int main() {
	// �л��� �̸��� ���� �Է¹ޱ�
	cout << "Your name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	// �߰����� �⸻��� ������ ���� �Է¹ޱ�
	cout << "Midterm & Final scores: ";
	double midterm, final; // double = �ּ� 10�ڸ�����, ���� 15�ڸ�����
	cin >> midterm >> final;

	// ���� ������ ����
	cout << "Enter all homework grades "
		"followed by EOF: "; // End-Of-File
	vector<string> words;
	string max = "";
		string min = " "; 

	// ���ݱ��� �Էµ� ���� ������ ������ ��
	int count = 0; // ���� �? 
	double sum = 0; // �� ��� - 0.0 = double, 0 = int �ڵ� ������

	// �Է��� ���� ����
	string word;
	while (cin >> word) {
		words.push_back(word);
	}


	//ũ��Ȯ��
	if (word.size() < min.size()) min = word;
	else if (word.size() > max.size()) max = word;
	}

	// ����� ���
cout << " Words: " << words.size();

//���
for () {
	if (/*words ���Ϳ� ������*/)
		

	return 0;
} // main ��