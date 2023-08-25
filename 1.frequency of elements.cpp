#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate frequency of each element
    int freq[n];  // Array to store frequencies
    int visited[n];  // Array to mark visited elements
    for (int i = 0; i < n; i++) {
        freq[i] = 0;
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;  // Already counted this element
        }

        freq[i] = 1;  // Count the current element
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq[i]++;  // Increment frequency
                visited[j] = 1;  // Mark the duplicate element as visited
            }
        }
    }

    // Print elements and their frequencies
    printf("Element  Frequency\n");
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;  // Skip duplicates
        }
        printf("%d\t%d\n", arr[i], freq[i]);
    }

    return 0;
}

