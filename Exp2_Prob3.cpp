#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	int x,y;
	double z,V;
	// values
	z=2.5;
	cout << setprecision(2) << fixed << showpoint;

	cout <<"Enter value for x: ";
	cin>> x;
	cout <<"Enter value for y: ";
	cin>> y;

	switch(x)
	{
	case 1:
		if( y<5 && y>1)
			{
				V = x*y*z;
				cout << V;
			}
		else if(y>=5)
			{
				V = x+(y/z);
				cout << V;
			}
		break;

	case 2:
		if(y<=5)
			{
				V = abs((x-y)/z);
				cout << V;
			}
		else if(y>5)
			{
				V = x-sqrt(y+z);
				cout << V;
		    }
		break;

	default:
		V = x+y+z;
		cout << V;

}
	getch();
	return 0;
}