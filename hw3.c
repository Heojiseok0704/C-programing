#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, k, n;
	n = 5;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
