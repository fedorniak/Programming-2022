#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long double a, h, b, x[100], up = 1, up1, down = 1, down1, last, num, module, sum, y[100], s[100], pohyb[100];
	cout << "Eneter a, h, b:" << endl;
	cin >> a;
	cin >> h;
	cin >> b;

	x[1] = a;
	x[10] = b;
	for (int i = 1; i < 9; i++) {
		x[i + 1] = a + h * i;
	}

	for (int i = 0; i <= 10; i++) {
		last = 1;
		up1 = -1;
		down1 = 3;
		num = 1;
		module = 1;
		sum = 1;
		while (module > 0.00001) {
			for (int j = 1; j <= num; j++) {
				up *= up1;
				down *= down1;
				up1 = (up1 + 3) * (-1);
				down1 += 3;
			}


			sum += ((up / down) * pow(x[i], num));
			module = abs(((up / down) * pow(x[i], num)) - last);
			last = ((up / down) * pow(x[i], num));
			num++;
		}
		s[i] = sum;
		y[i] = 1 / (long double)pow((1 + x[i]), (1 / 3));
		pohyb[i] = abs((s[i] - y[i]) / y[i]) * 100;
	}

	for (int i = 1; i <= 10; i++) {
		cout << x[i] << "   " << s[i] << "   " << y[i] << "   " << pohyb[i] << endl;
	}
	return 0;
}