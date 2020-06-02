#include <iostream>
using namespace std;

int max(int a, int b) 
{
	if (a > b)
	{
		return a;
	}

	else
	{
		return b;
	}
}

int min(int a, int b) 
{
	if (a < b)
	{
		return a;
	}

	else
	{
		return b;
	}
}

int main() 
{
	int a, b;

	cout << "두 수를 입력해 주세요 (띄어쓰기로 구분) >> ";
	cin >> a;
	cin >> b;

	cout << "큰 수 >> " << max(a, b);
	cout << endl << "작은 수 >> " << min(a, b);
	cout << endl;

}