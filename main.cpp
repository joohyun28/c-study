#include <iostream>
#include <string>
using namespace std;

int main() {
	Book NAME;//NAME ��ü ����
	int order;
	NAME.addPhone();


	do 
	{
		cout << "1. �ֽ� ��� ��ȭ��ȣ ��ȸ" << endl;
		cout << "2. �ֽ� ��� ��ȭ��ȣ ����" << endl;
		cout << "3. ���� >>";
		cin >> order;

		switch (order) {
		case 1:
			cout << NAME.getName() << "::" << NAME.getPnum() << endl;
			break;
		case 2:
			NAME.editPhone();
			break;
		}
	}
	while (order != 3);//3�� ���� ������ �ݺ�
	cout << endl;

}