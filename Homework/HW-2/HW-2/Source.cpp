#include <iostream>
#include <cmath>
using namespace std;
int main()
{
//task 20

	/*int a, b, c;

	cout << "Enter 1st number:" << endl;
	cin >> a;
	cout << "Enter 2nd number:" << endl;
	cin >> b;
	cout << "Enter 3rd number:" << endl;
	cin >> c;
	if ((a + c) / 2 == b)
	{
		cout << "Yes its Arithmetic progression";
}
	else
	{
		cout << "No it is not Arithmetic progression";
	}*/



	/*//task 18
	int x;
	cout << "Enter number:\n ";
	cin>> x;
	if (x < 100 || x>999)
	{
		cout << "It is not 3 digit number";
	}
	else
	{
		int num1, num2, num3;
		num1 = x / 100;
		num2 = (x - num1 * 100) / 10;
		num3 = x % 10;

		cout << "Sum of digits:" << num1 + num2 + num3;
	}*/


	/*//task 5
	double x;
	cin >> x;
	cout << pow(pow(x, 8.0) + pow(8.0, x), 1 / 8.0);*/

	/*//task17
	int a, b;
	cout << "Enter a:"<<endl;
	cin >> a;
	cout << "Enter b:"<<endl;
	cin >> b;
	cout << "arithmetic mean is " << (a + b) / 2.0;
	cout << "\ngeometric mean is " <<(double) sqrt(a*1.0* b);*/


	//task 15
	int num;
	cout << "Enter month number:\n";
	cin >> num;
		switch (num)
		{
		case 1:
			cout << "January";
			break;
		case 2:
			cout << "February";
			break;
		case 3:
			cout << "March";
			break;
		case 4:
			cout << "April";
			break;
		case 5:
			cout << "may";
			break;
		case 6:
			cout << "June";
			break;
		case 7:
			cout << "July";
			break;
		case 8:
			cout << "August";
			break;
		case 9:
			cout << "September";
			break;
		case 10:
			cout << "October";
			break;
		case 11:
			cout << "November";
			break;
		case 12:
			cout << "December";
			break;
		default:
			cout<< "Incorrect month number";
			break;
		}
	
	return 0;
}