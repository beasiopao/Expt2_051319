#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x;
	x = 1;
	cout << "Counting... \n";

	for (x=1; x<=10; x++)
	{
		cout << x << ", ";
		if (x==10)
		break;
	}

	for (x=12; x<31; x+=2)
	{
		cout << x << ", ";
		if (x==30)
			break;
	}
	getch();
	return 0;
}

