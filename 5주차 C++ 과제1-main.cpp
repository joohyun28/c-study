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
	do  // 종료 시까지 반복
	{
		cout << endl << "1. 최신 등록 전화번호 조회" << endl;
		cout << "2. 최신 등록 전화번호 수정" << endl;
		cout << "3. 종료 >> ";
		cin >> n;

		switch (n)
		{
		case 1:   // 1번 : 전화번호 조회
			cout << ph.getName() << "::" << ph.getPnum() << endl;
			break;
		case 2:   // 2번 : 전화번호 수정
			ph.editPhone();
		}
	} while (n != 3);
}