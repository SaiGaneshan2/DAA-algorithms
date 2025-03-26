#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        swap(&arr[i],&arr[min_index]);
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

    selectionsort(arr, n);

    print_array(arr, n);

    return 0;
}
