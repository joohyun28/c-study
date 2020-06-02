#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

class Random  // Random : ���� ���� �߻���Ŵ
{
    public:  // (<->private) : ��� Ŭ������ ���� ������

	Random();
	int next();  // ��� ���� ����
	int nextInRange(int x, int y);  //  ����� ������ ������ x <= ? <= y
};

Random::Random()
{
	srand((unsigned)time(0)); //srand : ������ ������ �ٸ� ������ �߻���Ŵ
							  //time : �� �� ���ο� ���� �߻���Ŵ
	                          //unsigned : ���� ������ �߻���Ŵ 
}

int Random::next()
{
	return rand(); // rand : ���� �� ��ȯ
}

int Random::nextInRange(int x, int y)
{
	return rand() % (y - x + 1) + x;   // (y - x + 1) : x���� y������ ���� �����									  
}

int main()
{
	Random r;
	int i, n;

	cout << "-- 0���� 32767 ������ ���� ���� 10 ��--" << endl;

	for (i = 0; i < 10; ++i)
	{
		n = r.next();  // 0���� 32767 ������ ���� ����
		cout << n << ' ';
	}

	cout << endl << endl << "== 2���� 4 ������ ���� ���� 10 �� ==" << endl;

	for (i = 0; i < 10; ++i)
	{
		n = r.nextInRange(2, 4);  // 2���� 4 ������ ���� ����
		cout << n << ' ';
	}

	cout << endl;
}