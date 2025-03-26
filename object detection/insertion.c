#include<stdio.h>

void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int temp=arr[i];
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 4, 2, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionsort(arr, n);

    print_array(arr, n);

    return 0;
}
