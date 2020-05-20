#include <iostream>
using namespace std;
int main()
{
	int i, k;
	for (i = 0; i < 5; i++) {
		for (k = 0; k < 5; k++) {
			if (k <= i)
				cout << "*";
		}
		cout << endl;
	}
}