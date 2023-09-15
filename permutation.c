#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void generatePermutations(int arr[], int size, int index) {
    if (index == size) {
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }

    for (int i = index; i < size; i++) {
        swap(&arr[index], &arr[i]);
        generatePermutations(arr, size, index + 1);
        swap(&arr[index], &arr[i]); 
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Generated permutations:\n");
    generatePermutations(arr, n, 0);

    return 0;
}
