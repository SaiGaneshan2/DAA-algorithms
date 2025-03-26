#include <stdio.h>

void merge(int arr[], int lb, int mid, int ub) {
    int i = lb, j = mid + 1, k = lb;
    int b[ub + 1]; 

    while (i <= mid && j <= ub) {
        if (arr[i] <= arr[j]) {
            b[k] = arr[i];
            i++;
        } else {
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    if (i > mid) {
        while (j <= ub) {
            b[k] = arr[j];
            j++;
            k++;
        }
    } else {
        while (i <= mid) {
            b[k] = arr[i];
            i++;
            k++;
        }
    }

    for (int x = lb; x <= ub; x++) {
        arr[x] = b[x];
    }
}

void mergeSort(int arr[], int lb, int ub) {
    if (lb < ub) {
        int mid = (lb + ub) / 2;
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 24, 8, 1, 3, 16, 10, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    printArray(arr, n);

    return 0;
}
