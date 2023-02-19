#include <iostream>
#include <cmath>
using namespace std;
int main() {
	//task 20
	/*int n;
	cout << "Entrer n: ";
	cin >> n;
	double a[100];
	for (int i = 1; i <= 4; i++) {
		cout << "Enter a: ";
		cin >> a[i];
	}
	double x[100];
	for (int i = 1; i <= n; i++) {
		cout << "Enter x: ";
		cin >> x[i];
	}
	double b[100];
	for (int i = 1; i <= n; i++)
	{
		b[i] = ((pow(x[i], 2.0) - x[i] - a[1]) * (pow(x[i], 2.0) - x[i] - a[2]) * (x[i] - a[3]))/((x[i]-a[i])*(x[i]-a[2]))-(pow(x[i], 4.0)-x[i]+a[4])/x[i]+x[i]*(x[i]+a[3]);
		cout << b[i]<<endl;
	}*/

	//task 20 b
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != '5' && s[i] != '0') {
			cout << s[i];
		}
	}
	return 0;
}