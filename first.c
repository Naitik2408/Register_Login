#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int mindex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mindex]) {
                mindex = j;
            }
        }
        if (mindex != i) {
            swap(&arr[i], &arr[mindex]);
        }
    }
}

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // Not found
}

int main() {
    int arr[] = {7, 9, 6, 4, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    selectionSort(arr, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int target = 6;
    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("\n%d found at index %d.\n", target, result);
    } else {
        printf("\n%d not found in the array.\n", target);
    }

    return 0;
}