#include <iostream>
using namespace std;

int main()
{
	int number;
	int shape;

	int i, j, k, m;

	while (1)
	{
		cout << "------�� ��� �ý���------" << endl
			<< "����� ���� ����� �������ּ���." << endl
			<< "1.�����ﰢ��" << endl
			<< "2.���ﰢ��" << endl
			<< "3.����" << endl
			<< "4.������" << endl << endl;

		cin >> number;

		switch (number)
		{

		case 1:
			cout << "�����ﰢ���� �����ϼ̽��ϴ�." << endl
				<< "���� ������ �Է����ּ��� : ";
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
			cout << "���ﰢ���� �����ϼ̽��ϴ�." << endl
				<< "���� ������ �Է����ּ��� : ";
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
			cout << "���� �����ϼ̽��ϴ�." << endl;
			do
			{
				cout << "���� ����(����)�� �Է����ּ���(Ȧ��only) : ";
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
			cout << "�����⸦ �����ϼ̽��ϴ�." << endl
				<< "�����մϴ�.";
			return 0;
		default:
			cout << "�߸��� ��ȣ�Դϴ�. �ٽ� �������ּ���.(1~4)" << endl;
			break;
		}
	}
}
