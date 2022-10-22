#include <iostream>
using namespace std;
int main()
{
	/*cout << "enter k=" << endl;
	int k;
	cin >> k;
	int a[10000];
	for (int i = 1; i <=k; i++)
	{
		if (k % i == 0) {
			a[i] = i;
			cout << "i=" << i<<endl;
		}

	}*/
	/*double a[100];
	cout << "Enter m:" << endl;
	int m;
	cin >> m;
	for (int i = 0; i != m; i++) {
		cin >> a[i];


	}
	bool s = true;
	for (int i = 0; i != m - 1; i++) {
		if (a[i] < a[i + 1])
		{
			cout << "ne good"<<endl;
			s = false;
			break;

		}

	}
	if (s == true) {
		cout << "good";
	}*/
	
	int size;
	cout << "Input size:" << endl;
	cin >> size;
	int array[100];
	for (int i = 0; i < size; i++) {
		cout << "Input x" << endl;
		cin >> array[i];
	}
	int min = array[0];
	int index = 0;
	for (int i = 1; i!= size; i++) {
		if (array[i] < min) {
			min = array[i];
			index = i;
		}
		cout << "min num" << min << "index=" << index;*/
	return 0;
}