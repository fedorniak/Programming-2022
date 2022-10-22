#include <iostream>
using namespace std;
int main() {
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
	for (int i = 1; i != size; i++) {
		if (array[i] < min) {
			min = array[i];
			index = i;
		}
		cout << "min num" << min << "index=" << index; */
			return 0;


}