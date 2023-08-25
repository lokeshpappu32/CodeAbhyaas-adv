#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;
    int firstSmallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }

        if (arr[i] < firstSmallest) {
            secondSmallest = firstSmallest;
            firstSmallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != firstSmallest) {
            secondSmallest = arr[i];
        }
    }

    printf("Second largest element: %d\n", secondLargest);
    printf("Second smallest element: %d\n", secondSmallest);

    return 0;
}

