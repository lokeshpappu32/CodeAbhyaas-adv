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
    int minFreq = n;  // Initialize with maximum possible value
    int minFreqElement = arr[0];
    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }
        if (freq < minFreq) {
            minFreq = freq;
            minFreqElement = arr[i];
        }
    }

    // Print the least frequent element and its frequency
    printf("Least frequent element: %d\n", minFreqElement);
    printf("Frequency: %d\n", minFreq);

    return 0;
}

