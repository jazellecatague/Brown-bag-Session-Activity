#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	int m, d, y;
	string InvDate;
	bool abort = false;
	
	InvDate = "Invalid Date!";
		
	do
	{
		cout << "ENTER MONTH" << endl;
		cin >> m;
		cout << "ENTER DAY" << endl;
		cin >> d;
		cout << "ENTER YEAR" << endl;
		cin >> y;
				
		if (m >= 13)
		cout << InvDate << endl;
		else if (d == 0)
		cout << InvDate << endl;
		else if (d >= 32)
		cout << InvDate << endl;
		else if (m == 0)
		cout << InvDate << endl;
		else if (d >= 32  && d == 0)
		cout << InvDate << endl;
		else if (m >= 13 && m == 0 && d >= 32  && d == 0)
		cout << InvDate << endl;
		else if (m == 2 && d >= 29)
		cout << InvDate << endl;
		
		switch(m)
		{
			case 1:
				cout << "January" << ' ';
				break;
			case 2:
				cout << "February" << ' ';
				break;
			case 3:
				cout << "March" << ' ';
				break;
			case 4:
				cout << "April" << ' ';
				break;
			case 5:
				cout << "May" << ' ';
				break;
			case 6:
				cout << "June" << ' ';
				break;
			case 7:
				cout << "July" << ' ';
				break;
			case 8:
				cout << "August" << ' ';
				break;
			case 9:
				cout << "September" << ' ';
				break;
			case 10:
				cout << "October" << ' ';
				break;
			case 11:
				cout << "November" << ' ';
				break;
			case 12:
				cout << "December" << ' ';
				break;
		}
		
		cout << d << "," << ' ';
		cout << y << endl;
		
	} while (!abort);
	
	_getch();
	return 0;
}
