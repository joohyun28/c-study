#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

class Random  // Random : 랜덤 수를 발생시킴
{
    public:  // (<->private) : 모든 클래스가 접근 가능함

	Random();
	int next();  // 멤버 변수 선언
	int nextInRange(int x, int y);  //  출력할 정수의 범위는 x <= ? <= y
};

Random::Random()
{
	srand((unsigned)time(0)); //srand : 시작할 때마다 다른 정수를 발생시킴
							  //time : 매 초 새로운 값을 발생시킴
	                          //unsigned : 양의 정수만 발생시킴 
}

int Random::next()
{
	return rand(); // rand : 랜덤 수 반환
}

int Random::nextInRange(int x, int y)
{
	return rand() % (y - x + 1) + x;   // (y - x + 1) : x에서 y사이의 값만 도출됨									  
}

int main()
{
	Random r;
	int i, n;

	cout << "-- 0에서 32767 까지의 랜덤 정수 10 개--" << endl;

	for (i = 0; i < 10; ++i)
	{
		n = r.next();  // 0에서 32767 사이의 랜덤 정수
		cout << n << ' ';
	}

	cout << endl << endl << "== 2에서 4 까지의 랜덤 정수 10 개 ==" << endl;

	for (i = 0; i < 10; ++i)
	{
		n = r.nextInRange(2, 4);  // 2에서 4 사이의 랜덤 정수
		cout << n << ' ';
	}

	cout << endl;
}