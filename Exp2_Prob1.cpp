#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int hours;
	char pack;

	cout <<"Which package did you purchase (A-C): ";
	cin>> pack;
	cout <<"How many hours did you use the internet: ";
	cin>> hours;

	switch (pack)
	{
	case 'a':
	case 'A':
		if (hours<=10)
			cout << "Total Amount Due: " << 995 << " Php";
		else
			cout << "Total Amount Due: " << 995+((hours-10)*20) << " Php";
		break;
	case 'b':
	case 'B':
		if (hours<=20)
			cout << "Total Amount Due: " << 1495 << " Php";
		else
			cout << "Total Amount Due: " << 1495+((hours-20)*10) << " Php";
		break;
	case 'c':
	case 'C':
		cout << "Total Amount Due: " << 1995 << " Php";
		break;
	default:
		cout << "Invalid Input";
	}
	getch();
	return 0;
}