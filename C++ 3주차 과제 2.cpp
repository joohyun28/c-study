#include<iostream>
#include<string>
using namespace std;

void  swap(int *i, int *k)
{
	int temp;
	temp = *i; 
	*i = *k;
	*k = temp;
}
	


int main()
{
	int i, k;

	cout << "first number >> ";
	cin >> i;


	cout << "second number >> ";
	cin >> k;

	cout << "swap 전 >> " << i << ' ' << k << endl;

	swap(&i, &k);

	cout << "swap 후 >> " << i << ' ' << k	<< endl;

}
