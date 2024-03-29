// chp3ex0.cpp
// �߰����, �⸻���, �׸��� ���� ���� ��� �ް�
// ������ ��� ��� ������ ����ϱ�.
#include <algorithm>
#include <ios>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

using std::cin;	using std::setprecision; // �Ǽ� ���� ���� ����
using std::cout; using std::string;
using std::endl; using std::streamsize;
using std::qsort; using std::vector;
using std::domain_error
//�߰����� ����, �⸻���� ����, ���� ���� ��������
//�л��� ���� ������ ����
double grade(double mt, double ) {
	return 0.2 * mt + 0.4 * ft + 0.4 * hw;
	

}
//�߰����� ����, �⸻���� ����, ���� ������ ���ͷ� 
//�л��� ���� ������ ����.
//�� �Լ��� �μ��� �������� �ʰ� median�Լ��� �ش� �۾��� ����.
double grade(double mt, double ft, const vector<double>& hw) {
	if (hw.size() == 0)
		throw domain_error("No  homework!");

	return grade(mt, ft, hw);
}

//vector<double> �� �߾Ӱ��� ����
//�Լ��� ȣ���ϸ� �μ��� ������ ���͸� �뤊�� ����
double median(vector<double> vec) {
	//���� ������ �Է� ���� Ȯ��
	typedef vector<double>::size_type_vec_sz;
	vec_sz size = vec.size();
	if (size == 0) {
		throw domain_error("Median of empty vector");
	}
}

//������ ����
sort(vec.begin(), vec.end());

//������ �߾Ӱ��� ����
vec_sz mid = size / 2;
return size % 2 == 0
? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];

//�Է� ��Ʈ������ ���� ������ �о vector<double>�� ����
istream& read_hw(istream& in, vector<double>& hw) 
	if (in) {
		//���� ������ ����
		hw.clear();

		//���� ������ ����
		double x;
		// �Һ���: ���ݱ��� count�� ������ �Է¹޾�����
	// �Է¹��� ������ ���� sum
		while (in >> x) {
			hw.push_back(x);
}

		//���� �л������� �Է� �۾��� ����� ��Ʈ�� ���

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

	// ���ݱ��� �Էµ� ���� ������ ������ ��
	int count = 0; // ���� �? 
	double sum = 0; // �� ��� - 0.0 = double, 0 = int �ڵ� ������

	// �Է��� ���� ����
	double x; // cin���� ����ϱ� 

	// �Һ���: ���ݱ��� count�� ������ �Է¹޾�����
	// �Է¹��� ������ ���� sum
	while (cin >> x) {
		++count; // ���� 1, 2, 3, 4, 5, 6, ...
		sum += x; // 0 + 99 + 98 + 85 + 71 ...

	}

	//���� ������ ����� ����
	try {
		double final_grab = grade(midterm.final.homework);

		// ����� ���
		streamsize prec = cout.precision(); // ���� cout precision
		cout << "Final grade: " << setprecision(3)
			<< final grade << setprecision(prec) << endl;
	}
	catch (domain_error) {
		cout << endl << "No grades entered. Try again." << endl;
		return 1;
	}

	return 0;
} // main ��