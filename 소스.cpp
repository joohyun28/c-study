#include <iostream>
#include <string>
using namespace std;

class Book {
private:
	string name;
	string num;//���� �� �ƴ϶� -�� �����ϱ� ���ڿ��� �ν�

public:
	void addPhone();//�Է��� ��ȭ��ȣ ���
	void editPhone();//��ȭ��ȣ ����
	string getPnum();//��ȭ��ȣ�� �ҷ���
	string getName();//�̸��� �ҷ���

};

void Book::addPhone() {

	cout << " --- swing ��ȭ��ȣ�� --- " << endl;
	cout << "�̸��� �Է����ּ��� >> ";
	cin >> name;
	cout << "��ȭ��ȣ�� �Է����ּ��� >> ";
	cin >> num;
}

void Book::editPhone() {

	string editName; //������ �̸�
	string editPnum; //������ ��ȣ

	cout << "�̸��� �Է����ּ��� >> ";
	cin >> editName;
	if (editName == name)
	{
		cout << "������ ��ȭ��ȣ�� �Է��� �ּ��� >> ";
		cin >> editPnum;
		num = editPnum;
	}
	else
	{
		do {
			cout << "����ó�� �������� �ʽ��ϴ� �ٽ� �Է��� �ּ��� >>";
			cin >> editName;//������ �̸� �ٽ� �Է�
		} 
		while (editName != name);
		cout << "������ ��ȭ��ȣ�� �Է��� �ּ��� >> ";
		cin >> editPnum;
		num = editPnum;//������ �ԷµǾ��� ��ȣ�� ������ ��ȣ�� ����
	}

}

string Book::getPnum() {

	return num;
}

string Book::getName() {

	return name;
}



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