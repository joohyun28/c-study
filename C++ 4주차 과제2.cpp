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

void phonebook::addPhone() // 새로운 번호 추가
{
	cout << "-- swing 전화번호부 --" << endl;
	cout << "이름을 입력해 주세요 >> ";
	cin >> name;
	cout << "전화번호를 입력해 주세요 >>";
	cin >> phonenum;
	cout << endl;
}

void phonebook::editPhone()  // 기존 번호를 수정함
{
	string newname;  // 새로운 이름 추가
	cout << "이름을 입력해 주세요 >>";


	do   // name과 newname이 같을 때까지 반복
	{
		cin >> newname;

		if (name != newname)   //name과 newname이 다름 
		{
			cout << "연락처가 존재하지 않습니다. 다시 입력해주세요. >>";
		}
	} while (name != newname);

	cout << "변경할 전화번호를 입력해 주세요 >>";
	cin >> phonenum;
}

string phonebook::getPnum()   // 번호를 불러오는 함수
{
	return phonenum;
}

string phonebook::getName()   // 이름을 불러오는 함수
{
	return name;
}

int main()
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