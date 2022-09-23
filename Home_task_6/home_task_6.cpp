#include <iostream>
using namespace std;

double mean(int a, int b) {
	return (a + b) / (double)2;
}
double arrMeanValue(int anyarr[], int const length) {
	int counter = 0, sum = 0;
	for (int i = 0; i < length; i++) {
		sum += anyarr[i];
	}
	return sum / length;
}
void arrPositive(int anyarr[], int const length) {
	for (int i = 0; i < length; i++) {
		anyarr[i] = abs(anyarr[i]);
	}
}
void factor(int a);

int main() 
{
	int n, m;
	setlocale(LC_ALL, "Russian");

/*������ 1
		�������� ������� mean(), ������� ����������
		������� �������������� ���� ���������� � �� �����.
		�� �������� ������������������ � ������.
*/
	cout << "\tHome_task_6.1\n";
	cout << " ������� 2 ����� �����: " << "\n";
	cin >> n >> m;
	cout << " ������� �������������� ��������� �����: " << mean(n, m) << "\n\n";

/*������ 2
		�������� ������� arrMeanValue(), ������� �����
		���������� ������� �������������� ���� ���������
		����������� �� �������.
*/
	cout << "\tHome_task_6.2\n";
	int const size1 = 5;
	int arr1[size1];
	cout << "��������� ������ �� " << size1 << " ����� �����: \n";
	for (int i = 0; i < size1; i++) {
		cin >> arr1[i];
	}
	cout << " ������� �������������� ���� ��������� �������: ";
	for (int i = 0; i < size1; i++) {
		cout << arr1[i] <<", ";
	}
	cout << "\b\b ";
	cout << "\n �����: " << arrMeanValue(arr1, size1) << "\n\n";
	
/*������ 3
		�������� �������, ������� ��������� ������ � ���
		�����, ����� ���� ������ � �� ��� ������������� �����
		�� �������������.���� ������������� ����� �����
		�������� �� ������
*/
	cout << "\tHome_task_6.3\n";
	int const size2 = 6;
	int arr2[size2];
	cout << "��������� ������ �� " << size2 << " ����� �����: \n";
	for (int i = 0; i < size2; i++) {
		cin >> arr2[i];
	}
	arrPositive(arr2, size2);
	cout << " \"�������������\" ������ ��������� ����� �������� ���: ";
	for (int i = 0; i < size2; i++) {
		cout << arr2[i] << ", ";
	}
	cout << "\b\b  \n\n";

/*������ 4
		�������� �������, ������� ��������� ����� N �
		����������� �������� ��������� ���������� S,
		���������� � �������, � N ���.����� ����� �������
		������� �������� S.����������������� ������
		�������, ������ � ��������� ���, ��������� � ��
		��������� ��������.
*/

	cout << "\tHome_task_6.4 \n";
	cout << " ������� �����: ";
	cin >> n;
	cout << " � ��� ����� ������: ";
	factor(n);
	cout << " :p\n";
	cout << " ���������� ��� ���: ";
	cin >> n;
	cout << " � ��� ����� ������: ";
	factor(n);
	cout << " :p\n";
	cout << " ������� �����: ";
	cin >> n;
	cout << " � ����� �������: ";
	factor(n);
	cout << " :p\n ������� ������ ���)";
	return 0;
}
void factor(int a) {
	int s = 4;
	s *= a;
	cout << s;
}