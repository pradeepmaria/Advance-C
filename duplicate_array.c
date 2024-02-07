#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    int uniqueArray[n]; // Auxiliary array to store unique elements
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        // Check if the element is a duplicate
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == uniqueArray[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If it's not a duplicate, add it to the uniqueArray
        if (!isDuplicate) {
            uniqueArray[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    // Replace the original array with the uniqueArray
    for (int i = 0; i < uniqueCount; i++) {
        arr[i] = uniqueArray[i];
    }

    return uniqueCount;
}

int main() {
    int arr[] = {3, 1, 2, 2, 3, 4, 5, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int newSize = removeDuplicates(arr, n);

    printf("\nArray with duplicates removed: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nNew array size after removing duplicates: %d\n", newSize);

    return 0;
}

