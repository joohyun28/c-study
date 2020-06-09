#include <iostream>
#include <string>
using namespace std;

class VendingMachine
{
private:
	string name; //음료 이름
	int price; //가격
	int total = 0; //총 음료 가격의 합
public:
	VendingMachine() {};//생성자
	void purchase(double v1);
	void menu();
	string getName();//메뉴판
	double getPrice();//price 값 반환
	double GetPrice();
	double getTotal();//total 값 반환
	void setName(string n);//name 값 수정
	void setPrice(int p);// price 값 수정
	void setTotal(int t);// total 값 수정
};

void VendingMachine::purchase(double v1) {
	int cash, a; 
	cout << "총 금액 : " << v1 << endl;
	cout << "지폐를 입력하세요 : ";
	cin >> cash;
	cout << endl;

	while (1) {
		if (cash == v1) {
			cout << "거스름돈이 없습니다.";
			break;
		}
		else if (cash < v1) {
			cout << "금액이 부족합니다. 다시 넣어주세요. : ";
			cin >> cash;
		}
		else if (cash > v1) {
			if (cash % 500 == 0 && cash % 100 == 0) {
				cout << "거스름돈입니다." << endl;
				a = cash - v1;
				cout << "500원 : " << a / 500 << "개" << endl;
				cout << "100원 : " << a % 500 / 100 << "개" << endl;
				break;
			}
			else {
				cout << "거스름돈은 500원과 100원만 가능합니다." << endl;
				a = cash - v1;
				cout << "500원 : " << a / 500 << "개" << endl;
				cout << "100원 : " << a % 500 / 100 << "개" << endl;
				break;
			}
		}
	}
}

void VendingMachine::menu() {
	cout << "=====SWING 자판기=====" << endl;
	cout << "1. 코카콜라 : 1500원" << endl;
	cout << "2. 비타500 : 900원" << endl;
	cout << "3. 파워에이드 : 2000원" << endl;
	cout << "4. " << name << " : " << price << "원" << endl;
	cout << "5. 계산" << endl << endl;
}

string VendingMachine::getName() {
	cin >> name;
	return name;
}

double VendingMachine::getPrice() {
	cin >> price;
	return price;
}

double VendingMachine::getTotal() {
	return total;
}

double VendingMachine::GetPrice() {
	return price; 
}
void VendingMachine::setName(string n) {
	n = name;
}

void VendingMachine::setPrice(int p) {
	p = price;
}

void VendingMachine::setTotal(int t) {
	total = total + t;
}

int main(void) {
	VendingMachine VM;

	VendingMachine *p = &VM;

	cout << "=====SWING 자판기=====" << endl;
	cout << "1. 코카콜라 : 1500원" << endl;
	cout << "2. 비타500 : 900원" << endl;
	cout << "3. 파워에이드 : 2000원" << endl;
	cout << "4. 준비중" << endl;
	cout << "5. 계산" << endl << endl;

	int a, b;

	cout << "추가할 음료 이름을 입력해 주세요 : ";
	(*p).setName(VM.getName());
	cout << "판매할 가격을 입력하세요 : ";
	(*p).setPrice(VM.getPrice());

	cout << endl;

	do {
		VM.menu();
		cout << "번호를 선택해주세요 : ";
		cin >> a;

		switch (a) {
		case 1:
			cout << "구매할 수량을 입력해주세요 : ";
			cin >> b;
			cout << endl;
			(*p).setTotal(b * 1500);
			break;

		case 2:
			cout << "구매할 수량을 입력해주세요 : ";
			cin >> b;
			cout << endl;
			(*p).setTotal(b * 900);
			break;

		case 3:
			cout << "구매할 수량을 입력해주세요 : ";
			cin >> b;
			cout << endl;
			(*p).setTotal(b * 2000);
			break;

		case 4:
			cout << "구매할 수량을 입력해주세요 : ";
			cin >> b;
			cout << endl;
			(*p).setTotal(b * VM.GetPrice());
			break;

		case 5:
			break;

		default:
			cout << "이상한 숫자입니다." << endl;
		}
	} while (a != 5);

	cout << endl;

	cout << "계산 중입니다. 기다려주세요..." << endl << endl;

	VM.purchase(VM.getTotal());

	cout << "안녕히가세요." << endl << endl;
}