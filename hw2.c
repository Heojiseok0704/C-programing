#include <stdio.h>

int main() {
	double km, mile;

	printf("ų�ι��͸� �Է��ϼ��� : ");
	scanf_s("%lf", &km);

	mile = km / 1.609;

	printf("%.1lf ����\n", mile);
	
	return 0;
}