
#include <iostream>
#include "Complex.h"
using namespace std;

template <typename T>
void SortBubles(T* m, int n)
{
	cout << endl;
	setlocale(LC_ALL, "Russian");
	cout << "Массив, сортированный методом пузырьком: " << endl;
	for (int i = n - 1; i >= 1; i--) {
		for (int j = 0; j < i; j++)
		{
			if (m[j] > m[j + 1])
			{
				T foo = m[j];
				m[j] = m[j + 1];
				m[j + 1] = foo;
			}
		}
	}

}
void GetCom(Complex* m, const int n)
{

	for (int i = 0; i < n; i++) {
		double re = rand() % 10;
		double im = rand() % 10;
		Complex v{ re, im };
		m[i] = v;
	}
}

void Get(int* m, const int n) {
	for (int i = 0; i < n; i++) {
		m[i] = rand() % 10;
	}
}

void show(int* m, int n) {
	for (int i = 0; i < n; i++) {
		cout << m[i] << " ";
	}
}
void showCom(Complex* m, int n) {
	for (int i = 0; i < n; i++) {
		m[i].printComplex();
		cout << " ";
	}
	cout << endl;
}
int main() {
	setlocale(LC_ALL, "ru");
	int num;
	cout << "введите кол - во символов в массиве: ";
	cin >> num;
	Complex* arr = new Complex[num];
	GetCom(arr, num);
	SortBubles(arr, num);
	showCom(arr, num);
	delete[] arr;
	return 0;
	return 0;
}