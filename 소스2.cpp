#include <stdio.h>

int temp(int);

int main(void)

{
	double f, c;

	printf("��������? : ");
	scanf_s("%lf", &f);

	c = (9.0 / 5.0) * f + 32.0;

	printf("ȭ�����µ��� % 1lf�� �Դϴ�.\n", c);

	return 0;

}