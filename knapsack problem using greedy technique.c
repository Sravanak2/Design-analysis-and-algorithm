#include <stdio.h>
#include <stdlib.h>

struct Item {
    int value;
    int weight;
};

int compare(const void *a, const void *b) {
    double ratio1 = (double)(((struct Item *)a)->value) / ((struct Item *)a)->weight;
    double ratio2 = (double)(((struct Item *)b)->value) / ((struct Item *)b)->weight;
    if (ratio1 < ratio2)
        return 1;
    else if (ratio1 > ratio2)
        return -1;
    return 0;
}

double fractionalKnapsack(int capacity, struct Item items[], int n) {
    qsort(items, n, sizeof(struct Item), compare);

    double max_value = 0.0;
    int current_weight = 0;

    for (int i = 0; i < n; i++) {
        if (current_weight + items[i].weight <= capacity) {
            current_weight += items[i].weight;
            max_value += items[i].value;
        } else {
            int remaining_capacity = capacity - current_weight;
            max_value += (double)(remaining_capacity) / items[i].weight * items[i].value;
            break;
        }
    }

    return max_value;
}

int main() {
    int n, capacity;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    printf("Enter the maximum capacity of the knapsack: ");
    scanf("%d", &capacity);

    struct Item items[n];

    printf("Enter the value and weight of each item:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d: ", i + 1);
        scanf("%d %d", &items[i].value, &items[i].weight);
    }

    double max_value = fractionalKnapsack(capacity, items, n);

    printf("The maximum value that can be obtained is: %.2lf\n", max_value);

    return 0;
}
