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

int main(void)
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