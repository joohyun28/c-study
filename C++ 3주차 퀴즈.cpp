#include<iostream>
using namespace std;

int max(int a, int b) 
{
	if (a < b)
		return b;

	else
		return a;
}

int min(int a, int b) 
{
	if (a < b)
		return a;

	else
		return b;
}

int main() {
	int a, b;
	cout << "�� ���� �Է��� �ּ��� (����� ����) >> ";
	cin >> a >> b;
	cout << endl << "ū �� >> " << max(a, b);
	cout << endl << "���� �� >> " << min(a, b);
}
