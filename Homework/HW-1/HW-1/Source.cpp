#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	/*//enter radius print L S V
		const float pi = 3.1415;
			int r;
			cout << "Enter radius:" << endl;
			cin >> r;
			cout <<"L="<<2 * pi * r << endl;
			cout << "S=" << pi * pow(r,2) << endl;
			cout << "V=" << 4.0/ 3 * (pi * pow(r, 3));*/

			

	cout << "Enter num1:" << endl;
	cin >> num1;
	cout << "Enter num2:" << endl;
	cin >> num2;
	cout << "avg ar=" << (num1 + num2) / 2.0 << endl;
	cout << "avg geom=" << sqrt(num1 * num2);
	return 0;
}