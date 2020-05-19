#include <iostream>
using namespace std;

int main()
{
	int number;
	int shape;

	int i, j, k, m;

	while (1)
	{
		cout << "------별 찍기 시스템------" << endl
			<< "만들고 싶은 모양을 선택해주세요." << endl
			<< "1.직각삼각형" << endl
			<< "2.정삼각형" << endl
			<< "3.나비" << endl
			<< "4.나가기" << endl << endl;

		cin >> number;

		switch (number)
		{

		case 1:
			cout << "직각삼각형을 선택하셨습니다." << endl
				<< "행의 개수를 입력해주세요 : ";
			cin >> shape;
			
			for (i = 0; i < shape; i++)
			{
				for (j = shape; j > i; j--)
					cout << "*";
				cout << endl;
			}
		
			for (i = 0; i< shape; i++)
			{
				for (j = (shape - 1); j > i; j--)
				{
					cout << " ";
				}
				for (k = 0; k <= i; k++)
				{
					cout << "*";
				}
				cout << endl;
			}
		
			cout << endl;
			for (i = 0; i < shape; i++)
			{
				for (k = 0; k < i; k++)
				{
					cout << " ";
				}

				for (j = shape; j > i; j--)
				{
					cout << "*";
				}
				cout << endl;
			}

			break;


		case 2:
			cout << "정삼각형을 선택하셨습니다." << endl
				<< "행의 개수를 입력해주세요 : ";
			cin >> shape;
			for (i = 0; i < shape; i++)
			{
				
				for (j= shape; (j- 1) > i; j--)
				{
					cout << " ";
				}
				
				for (k = 0; k < 2 * i + 1; k++)
				{
					cout << "*";
				}
				cout << endl;
			}

			break;
		case 3:
			cout << "나비를 선택하셨습니다." << endl;
			do
			{
				cout << "행의 개수(높이)를 입력해주세요(홀수only) : ";
				cin >> shape;
			} while (shape % 2 == 0);
			{
				for (i = 0; i < (shape - 1) / 2; i++)
				{
				
					for (j = 0; j<=i; j++)
					{
						cout << "*";
					}
					for (k = (shape - 1); k > (2 * i + 1); k--)
					{
						cout << " ";
					}
					for (j = 0; j <= i; j++)
					{
						cout << "*";
					}
					cout << endl;
				}

			
				for (m = 0; m < shape; m++)
				{
					cout << "*";
				}

				cout << endl;
				
				for (i = 0; i < shape; i++)
				{
					for (j = (shape - 1) / 2; j > i; j--)
					{
						cout << "*";
					}
					for (k = 0; k < (2 * i + 1); k++)
					{
						cout << " ";
					}
					for (j = (shape - 1) / 2; j > i; j--)
					{
						cout << "*";
					}
					cout << endl;
				}
				break;
			}
		case 4:
			cout << "나가기를 선택하셨습니다." << endl
				<< "감사합니다.";
			return 0;
		default:
			cout << "잘못된 번호입니다. 다시 선택해주세요.(1~4)" << endl;
			break;
		}
	}
}
