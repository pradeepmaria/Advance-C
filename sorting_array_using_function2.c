#include <stdio.h>

// Function to find the index of the minimum element in the array
int findMinIndex(int arr[], int start, int end) {
    int min_index = start;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }
    return min_index;
}

// Recursive function to print the array in sorted order
void printSorted(int arr[], int size) {
    if (size <= 0) {
        return;
    }

    // Find the index of the minimum element
    int min_index = findMinIndex(arr, 0, size - 1);

    // Print the minimum element
    printf("%d ", arr[min_index]);

    // Swap the minimum element with the last element to "remove" it from the array
    int temp = arr[min_index];
    arr[min_index] = arr[size - 1];
    arr[size - 1] = temp;

    // Recursively call printSorted with the reduced array (excluding the last element)
    printSorted(arr, size - 1);
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Sorted array: ");
    printSorted(arr, n);
	printf("\n");
    return 0;
}

