#include <stdio.h>

int main() {
    int numbers[5];
    int even[5];
    int odd[5];
    int evenCount = 0;
    int oddCount = 0;

    printf("Please input five integers:\n");

    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            even[evenCount] = numbers[i];
            evenCount++;
        }
        else {
            odd[oddCount] = numbers[i];
            oddCount++;
        }
    }

    printf("Even numbers: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }

    printf("\n");

    return 0;
}
