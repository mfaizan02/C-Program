//This program is written for only assignment submission purpose.

#include <iostream>
using namespace std;
int main() 
{
	int a;
	cout << "Enter a number for how many times do you want the message to be displayed: ";
	cin >> a;

	for (int i = 1; i <= a; i++)
	{
		cout << "Hello World!";
		cout << endl;
	}



	return 0;
}