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
