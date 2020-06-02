#include<iostream>
#include<string>
using namespace std;

class phonebook
{
private:
	string name;
	string phonenum;

public:
	void addPhone();
	void editPhone();
	string getPnum();
	string getName();
};

void phonebook::addPhone() // ���ο� ��ȣ �߰�
{
	cout << "-- swing ��ȭ��ȣ�� --" << endl;
	cout << "�̸��� �Է��� �ּ��� >> ";
	cin >> name;
	cout << "��ȭ��ȣ�� �Է��� �ּ��� >>";
	cin >> phonenum;
	cout << endl;
}

void phonebook::editPhone()  // ���� ��ȣ�� ������
{
	string newname;  // ���ο� �̸� �߰�
	cout << "�̸��� �Է��� �ּ��� >>";


	do   // name�� newname�� ���� ������ �ݺ�
	{
		cin >> newname;

		if (name != newname)   //name�� newname�� �ٸ� 
		{
			cout << "����ó�� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���. >>";
		}
	} while (name != newname);

	cout << "������ ��ȭ��ȣ�� �Է��� �ּ��� >>";
	cin >> phonenum;
}

string phonebook::getPnum()   // ��ȣ�� �ҷ����� �Լ�
{
	return phonenum;
}

string phonebook::getName()   // �̸��� �ҷ����� �Լ�
{
	return name;
}

int main()
{
	phonebook ph;
	ph.addPhone();

	int n;
	do  // ���� �ñ��� �ݺ�
	{
		cout << endl << "1. �ֽ� ��� ��ȭ��ȣ ��ȸ" << endl;
		cout << "2. �ֽ� ��� ��ȭ��ȣ ����" << endl;
		cout << "3. ���� >> ";
		cin >> n;

		switch (n)
		{
		case 1:   // 1�� : ��ȭ��ȣ ��ȸ
			cout << ph.getName() << "::" << ph.getPnum() << endl;
			break;
		case 2:   // 2�� : ��ȭ��ȣ ����
			ph.editPhone();
		}
	} while (n != 3);
}