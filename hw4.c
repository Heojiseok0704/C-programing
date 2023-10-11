#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

	int isprime(int num) {
		if (num <= 1) {
			return 0;
		}

		for (int i = 2; i * i <= num; i++) {
			if (num % i == 0) {
				return 0;
			}
		}
		return 1;
	}
		int main() {
		int number;

		printf("양의 정수를 입력하세요: ");
		scanf("%d", &number);

		if (isprime(number)) {
			printf("It is a prime number.\n");
		}
		else {
			printf("It is not a prime number.\n");
		}
		return 0;
	}