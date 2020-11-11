#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

int main() {
    //Driver
    int arr[] = {51, 42, 51, 5, 8, 7, 9, 12};
    int n = sizeof(arr)/ sizeof(arr[0]);

    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    insertionSort(arr, n);

    printf("\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}
