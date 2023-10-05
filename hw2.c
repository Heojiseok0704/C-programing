#include <stdio.h>

int main() {
	double km, mile;

	printf("킬로미터를 입력하세요 : ");
	scanf_s("%lf", &km);

	mile = km / 1.609;

	printf("%.1lf 마일\n", mile);
	
	return 0;
}