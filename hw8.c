#include <stdio.h>
#include <math.h>

double calculateSD(double data[], int n) {
    double sum = 0.0, mean, standardDeviation = 0.0;

    for (int i = 0; i < n; ++i) {
        sum += data[i];
    }

    mean = sum / n;

       for (int i = 0; i < n; ++i) {
        standardDeviation += pow(data[i] - mean, 2);
    }

    return sqrt(standardDeviation / n);
}

int main() {
    double numbers[5];

    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; ++i) {
        scanf_s("%lf", &numbers[i]);
    }

      double sd = calculateSD(numbers, 5);

    printf("Standard Deviation = %.3f\n", sd);

    return 0;
}
