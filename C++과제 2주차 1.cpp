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
		cout << "���ڸ� �Է����ּ��� : ";
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

	cout << "---------���---------" << endl;
	cout << "Ȧ�� : ";
	for (i = 0; i < k; i++)
	{
		cout << odd[i] << " ";
	}
	cout << "\nȦ���� �� " << k << "�� �Դϴ�.";
	cout << "\n¦�� : ";
	for (i = 0; i < m; i++)
	{
		cout << even[i] << " ";
	}
	cout << "\n¦���� �� " << m << "�� �Դϴ�.";
}