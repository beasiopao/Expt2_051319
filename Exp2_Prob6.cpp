#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int number, answer;
	
	while(number = 1)
	{

		cout << "Enter a number: "; 
		cin >> number;
		
		if(number>0)
		{
			answer = (number*(number+1))/2;
			cout << "The sum of all whole numbers from 1 to "<< number << " is " << answer << ".\n";	
		}
		else
		{
			cout << "Thank you!";	
			break;	 
		}
}
	getch();
	return 0;
}