#include <iostream>
using namespace std;

int main()
{

	int number[5];
	int i, k=0, m=0;
	int odd[5];
	int even[5];

	for (i = 0; i < 5; i++)
	{
		cout << "숫자를 입력해주세요 : ";
		cin >> number[i];
	}

	for (i = 0; i < 5; i++)
	{
		if (number[i] % 2 == 1)
		{
			odd[k] = number[i];
			k++;
		}
		else
		{
			even[m] = number[i];
			m++;
		}
	}

	cout << "---------결과---------" << endl;
	cout << "홀수 : ";
	for (i = 0; i < k; i++)
	{
		cout << odd[i] << " ";
	}
	cout << "\n홀수는 총 " << k << "개 입니다.";
	cout << "\n짝수 : ";
	for (i = 0; i < m; i++)
	{
		cout << even[i] << " ";
	}
	cout << "\n짝수는 총 " << m << "개 입니다.";
}
