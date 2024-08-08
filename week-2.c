#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;

    for (i = 0; i < n-1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr1[] = {5021,3023,8045,6732};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    printf("Test Case-1\n");
    printf("Input: ");
    printArray(arr1, n1);
    selectionSort(arr1, n1);
    printf("After Sorting Product IDs: ");
    printArray(arr1, n1);

    int arr2[] = {1452,3890,5643,2751};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    printf("\nTest Case-2\n");
    printf("Input: ");
    printArray(arr2, n2);
    selectionSort(arr2, n2);
    printf("After Sorting Product IDs: ");
    printArray(arr2, n2);

    return 0;
}