#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int x, y, nextnumber, count;
	x = 0;
	y = 1;

	cout << "Fibonacci numbers: \n";
	for (count=0; count<=21; count++)
	{
		if (count < 2)
		{
			nextnumber = count;
			cout << nextnumber << ", ";
		}
		else 
		{
			nextnumber = x + y;
			x = y;
			y = nextnumber;
			cout << nextnumber << ", ";
	}
	}
	getch();
	return 0;
}