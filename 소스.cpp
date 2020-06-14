#include <iostream>
#include <string>
using namespace std;

class Book {
private:
	string name;
	string num;//숫자 뿐 아니라 -도 있으니까 문자열로 인식

public:
	void addPhone();//입력한 전화번호 등록
	void editPhone();//전화번호 수정
	string getPnum();//전화번호를 불러옴
	string getName();//이름을 불러옴

};

void Book::addPhone() {

	cout << " --- swing 전화번호부 --- " << endl;
	cout << "이름을 입력해주세요 >> ";
	cin >> name;
	cout << "전화번호를 입력해주세요 >> ";
	cin >> num;
}

void Book::editPhone() {

	string editName; //수정할 이름
	string editPnum; //수정할 번호

	cout << "이름을 입력해주세요 >> ";
	cin >> editName;
	if (editName == name)
	{
		cout << "변경할 전화번호를 입력해 주세요 >> ";
		cin >> editPnum;
		num = editPnum;
	}
	else
	{
		do {
			cout << "연락처가 존재하지 않습니다 다시 입력해 주세요 >>";
			cin >> editName;//수정할 이름 다시 입력
		} 
		while (editName != name);
		cout << "변경할 전화번호를 입력해 주세요 >> ";
		cin >> editPnum;
		num = editPnum;//기존에 입력되었던 번호는 수정할 번호로 변경
	}

}

string Book::getPnum() {

	return num;
}

string Book::getName() {

	return name;
}



int main() {
	Book NAME;//NAME 객체 생성
	int order;
	NAME.addPhone();


	do 
	{
		cout << "1. 최신 등록 전화번호 조회" << endl;
		cout << "2. 최신 등록 전화번호 수정" << endl;
		cout << "3. 종료 >>";
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
	while (order != 3);//3이 눌릴 때까지 반복
	cout << endl;

}