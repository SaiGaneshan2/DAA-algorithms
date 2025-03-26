#include<stdio.h>

void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int lb,int ub)
{
    int pivot=arr[lb];
    int start = lb;
    int end = ub;
    while(start<end)
    {
        while(arr[start]<=pivot && start<end)
        {
            start++;
        }
        while(arr[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(&arr[start],&arr[end]);
        }
    }
    swap(&arr[lb],&arr[end]);
    return end;
}
void quicksort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid = partition(arr,lb,ub);
        quicksort(arr,lb,mid);
        quicksort(arr,mid+1,ub);
    }
}


void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 4, 2, 3, 5, 7, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
    print_array(arr, n);
}