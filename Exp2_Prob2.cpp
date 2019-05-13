#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
int main()
{
	int wdcharge, lcharge;
	float waterbill, unpaidbal, recentmr, cucharge;
	
	//values of charges
	wdcharge = 35;
	cucharge = 1.10;
	lcharge = 20;

	cout << setprecision(2) << fixed << showpoint;

	cout <<"Enter water consumed (in gallons) from the previous month to the present: ";
	cin>> recentmr;
	cout <<"Enter your remaining balance: ";
	cin>> unpaidbal;

	if (unpaidbal>0)
	{
		waterbill = wdcharge + (recentmr*cucharge) + unpaidbal + lcharge;
		cout << "Water Bill: " << waterbill << " Php";
	}
	else
	{
		waterbill = wdcharge + (recentmr*cucharge);
		cout << "Water Bill: " << waterbill << " Php";
	}
	getch();
	return 0;
}