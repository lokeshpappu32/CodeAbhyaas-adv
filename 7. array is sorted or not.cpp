#include <stdio.h>
#include <stdbool.h>

bool isSorted(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false; // Array is not sorted
        }
    }
    return true; // Array is sorted
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isSorted(arr, n)) {
        printf("The array is sorted.\n");
    } else {
        printf("The array is not sorted.\n");
    }

    return 0;
}

