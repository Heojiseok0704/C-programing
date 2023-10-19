#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void binary(int n) {
	if (n > 1) {
		binary(n / 2);
	}
	printf("%d", n % 2);
}

int main() {
	int number;
	printf("Please enter a number: ");
	scanf("%d",&number);

	binary(number);
	printf("\n");

		return 0;
}