#include <stdio.h>

struct City {
    char name[50];
    char country[50];
    int population;
};

int main() {
    struct City cities[3];

    printf("Input three cities:\n");

    for (int i = 0; i < 3; ++i) {
        printf("Name> ");
        scanf_s("%49s", cities[i].name, sizeof(cities[i].name));

        printf("Country> ");
        scanf_s("%49s", cities[i].country, sizeof(cities[i].country));

        printf("Population> ");
        scanf_s("%d", &cities[i].population);
        getchar();
    }

    printf("\nPrinting the three cities:\n");

    for (int i = 0; i < 3; ++i) {
        printf("%d. %s in %s with a population of %d people\n",
            i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}
