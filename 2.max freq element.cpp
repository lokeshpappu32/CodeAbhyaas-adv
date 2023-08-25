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
    int maxFreq = 0;
    int maxFreqElement = arr[0];
    for (int i = 0; i < n; i++) {
        int freq = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }
        if (freq > maxFreq) {
            maxFreq = freq;
            maxFreqElement = arr[i];
        }
    }

    // Print the most frequent element and its frequency
    printf("Most frequent element: %d\n", maxFreqElement);
    printf("Frequency: %d\n", maxFreq);

    return 0;
}

