#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void func4(double* x, double* result) {
	*result = cos(*x) + sin(*x) + cos(3 * (*x)) + sin(3 * (*x));
}

void writeArray(int* arr, int n) {
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void readArray(int* arr, int n) {
	int i;
	for (i = 0; i < n; ++i)
		scanf_s("%d", arr + i);
}

void sort(int* arr, int n) {
	int i;
	int buff;
	_Bool unsorted;
	do {
		unsorted = 0;
		for (i = 0; i < n - 1; ++i)
			if (arr[i] > arr[i + 1]) {
				unsorted = 1;
				break;
			}
		if (unsorted) {
			for (i = 0; i < n - 1; ++i)
				if (arr[i] > arr[i + 1]) {
					buff = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = buff;
				}
		}
		else
			break;
	} while (unsorted);
}

void sortStackArray(int* arr, int n) {
	printf("\n");
	printf("\n");
	readArray(arr, n);
	printf("%d\n", n);
	writeArray(arr, n);
	sort(arr, n);
	writeArray(arr, n);
}

void main() {
	double x, y, result;
	int N = 5;
	int mas[5];
	int f = 1;
	for (int i = 0; i < f; ++i) {
		++f;
		printf("Choose task: ");
		switch (_getch()) {
		case '0':
			system("cls");
			printf("end\n");
			f = f - 1;
			break;
		case '1':
			sortStackArray(mas, N);
			_getch();
			continue;
		case '5':
			printf("\n");
			printf("X : ");
			scanf_s("%lf\n", &x);
			func4(&x, &result);
			printf("Function returned %.4lf\n\n", result);
			_getch();
			continue;
		default:
			_getch();
			system("cls");
			continue;
		}
	}
}