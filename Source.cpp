#include <iostream>
using namespace std;

void bubbleSort(int*, int);
void printArray(int*, int);
void mySwap(int&, int&);

int compare(int a, int b) {
	return a - b;
}

char getSign(int a, int b) {
	int cmp = compare(a, b);
	if (cmp > 0) return '>';
	if (cmp < 0) return '<';

	return '=';
}

int main()
{
	cout << compare << endl;
}


void mySwap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void bubbleSort(int* a, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				mySwap(a[j], a[j + 1]);
			}
		}
	}
}

void printArray(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
