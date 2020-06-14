#include <iostream>
#include <string>
using namespace std;

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