#include <iostream>
#include <string>
using namespace std;

class ATM
{
private:
	string name; // 계좌주 이름
	int pw = 0; // 계좌 비밀번호
	int check = 0; // 계좌 비밀번호 확인
	int money = 0; // 계좌 잔액

public:
	ATM(); // 생성자
	void deposit(); // 입금
	void withdraw(); // 인출
	void send(string receiver, int sendMon); // 이체-받음
	void receive(int receiveMon); // 이체-보냄
	int getMoney(); // 얼마 있는지 출력
	string getName(); // 이름 불러오기
	void setName(); // 계좌주 이름 입력
	void setPw(); // 계좌 비밀번호 입력
	void setMoney(); // 계좌주 잔액 입력
	void pwCheck(); // 비밀번호 재확인
	void pwCheck2();
};

int main()
{
	int num; // 은행에 가입할 인원 수
	int i, j, k = 999, m = 999;
	string Name = "none"; // 성함
	string receiver = "none";
	int number; // 번호 선택
	int sendMoney; // 보낼 금액

	cout << "은행에 가입할 인원을 입력해주세요 > ";
	cin >> num;
	ATM* account = new ATM[num]; // 인원 수(num)만큼 객체 배열 동적 생성

	for (i = 0; i < num; i++)
	{
		cout << endl << i + 1 << "번째 손님" << endl << endl;
		cout << "성명을 적어주십시오 >> ";
		(account + i)->setName();
		cout << "비밀번호를 입력해주세요 >> ";
		(account + i)->setPw();
		cout << "한 번 더 입력해주세요 >> ";
		(account + i)->pwCheck();
		cout << "입금할 금액을 입력해주세요 >> ";
		(account + i)->setMoney();
		cout << endl;
	}

	while (1)
	{
		while (1)
		{
			cout << endl << " --- SWING ATM ---" << endl;
			cout << "성함을 입력해주세요 (종료라면 x를 입력해주세요) >> ";
			cin >> Name;

			if (Name == "x") // x 입력 시 현재 속해 있는 while문 탈출
				break;

			k = 999; // k값 초기화
			for (j = 0; j < num; j++)
			{
				if (Name == (account + j)->getName())
					k = j;
				// Name과 계좌주의 이름을 비교하여 같을 시 해당 인덱스 값을 k에 대입
			}

			// k값이 그대로일 시 존재하지 않는 계좌주입니다 문구 출력
			if (k == 999 && Name != "x")
				cout << "존재하지 않는 계좌주입니다." << endl;
			else
				break; // 존재하는 계좌주 이름 입력 시 번호 선택 창으로 넘어감
		}

		if (Name == "x") // 위 while문에서 빠져나온 후, x가 입력된 상태이면 가장 바깥의 while문 탈출 => 프로그램 종료
			break;

		number = 0;

		while (number != 5)
		{
			cout << endl << " --- SWING ATM " << (account + k)->getName() << "님 ---" << endl;
			cout << "1. 입금" << endl;
			cout << "2. 인출" << endl;
			cout << "3. 이체" << endl;
			cout << "4. 잔액 확인" << endl;
			cout << "5. 종료" << endl << endl;
			cout << "번호를 선택해주세요 >> ";
			cin >> number;

			switch (number)
			{
			case 1:
			{
				cout << "입금할 금액을 입력해주세요 >> ";
				(account + k)->deposit();
				cout << endl << "현재 " << (account + k)->getName() << "님의 잔액은 " << (account + k)->getMoney() << "원 입니다." << endl;
				break;
			}
			case 2:
			{
				cout << "얼마를 인출하시겠습니까? >> ";
				(account + k)->withdraw();
				cout << "비밀번호를 입력해주세요 >> ";
				(account + k)->pwCheck2();
				cout << endl << "현재 " << (account + k)->getName() << "님의 잔액은 " << (account + k)->getMoney() << "원 입니다." << endl;
				break;
			}
			case 3:
			{
				cout << "누구에게 보내겠습니까? >> ";
				cin >> receiver;

				m = 999; // m값 초기화(초기화하지 않으면 존재하지 않는 계좌주 입력 시 이전에 입력된 인덱스 값 참조)

				for (j = 0; j < num; j++)
				{
					if (receiver == (account + j)->getName())
						m = j;
					// Name과 계좌주의 이름을 비교하여 같을 시 해당 인덱스 값을 m에 대입
				}

				if (m == 999) // 초기 m값 그대로일 시 계좌주가 존재하지 않음
					break;

				cout << "얼마를 보내겠습니까? >> ";
				cin >> sendMoney;
				(account + k)->send((account + m)->getName(), sendMoney);
				cout << "비밀번호를 입력해주세요 >> ";
				(account + k)->pwCheck2();
				cout << endl << (account + m)->getName() << "님께 " << sendMoney << "원을 보냈습니다." << endl;
				(account + m)->receive(sendMoney);
				cout << endl << "현재 " << (account + k)->getName() << "님의 잔액은 " << (account + k)->getMoney() << "원 입니다." << endl;
				break;
			}
			case 4:
				cout << (account + k)->getName() << "님의 현재 잔액은 " << (account + k)->getMoney() << "원 입니다." << endl; break;
			case 5: break;
			}
		}
	}

	cout << "ATM을 종료합니다." << endl;

	return 0;
}

ATM::ATM()
{};

void ATM::deposit()
{
	int plus;
	cin >> plus;
	money += plus;
}

void ATM::withdraw()
{
	int minus;
	cin >> minus;
	money -= minus;
}

void ATM::send(string receiver, int sendMon)
{
	money -= sendMon;
}

void ATM::receive(int receiveMon)
{
	money += receiveMon;
}

int ATM::getMoney()
{
	return money;
}

string ATM::getName()
{
	return name;
}

void ATM::setName()
{
	cin >> name;
}

void ATM::setPw()
{
	cin >> pw;
}

void ATM::setMoney()
{
	cin >> money;
}

void ATM::pwCheck()
{
	cin >> check;

	if (check != pw)
	{
		while (check != pw) // 입력된 비밀번호가 pw와 다를 때 반복
		{
			cout << "비밀번호가 서로 다릅니다." << endl << endl;
			cout << "비밀번호를 입력해주세요 >> ";
			cin >> check;
		}
	}
}

void ATM::pwCheck2()
{
	cin >> check;

	if (check != pw)
	{
		while (check != pw) // 입력된 비밀번호가 pw와 다를 때 반복
		{
			cout << "비밀번호가 틀렸습니다." << endl;
			cout << "비밀번호를 입력해주세요 >> ";
			cin >> check;
		}
	}
}