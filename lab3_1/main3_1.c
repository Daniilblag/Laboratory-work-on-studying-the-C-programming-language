#include <stdio.h>
#include "func3_1.h"

int main(void)
{
	int n;
	int k;
	int ir;
	double eps;
	double r;

	do
	{
		system("cls");
		printf("1 - Task1\n2 - Task2\n3 - Task3\n4 - Task4\n5 - Task5\n6 - Exit\r\n");
		char answer = _getch();
		system("cls");
		switch (answer)
		{
		case '1':
			printf("\nEnter n:\n");
			scanf_s("%lf", &n);
			printf("\n");
			r = summ1_1(n);
			printf("%lf\n", r);
			break;
		case '2':
			printf("\nEnter eps:\n");
			scanf_s("%lf", &eps);
			printf("\n");
			r = summ1_2(eps);
			printf("%lf\n", r);
			break;
		case '3':
			printf("\nEnter n:\n");
			scanf_s("%lf", &n);
			printf("\nEnter k:\n");
			scanf_s("%lf", &k);
			printf("\n");
			print1(n, k);
			break;
		case '4':
			printf("\nEnter eps:\n");
			scanf_s("%lf", &eps);
			printf("\n");
			ir = findFirstElement1(eps);
			printf("%lf\n", ir);
			break;
		case '5':
			printf("\nEnter eps:\n");
			scanf_s("%lf", &eps);
			printf("\n");
			ir = findFirstNegativeElement1(eps);
			printf("%lf\n", ir);
			break;
		case '6':
			return 0;
			break;
		default:
			printf("Invalid input\n");
			break;
		}

		system("pause");

	} while (1);
	return 0;
}