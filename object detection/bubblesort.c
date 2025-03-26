#include <stdio.h>

void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void bubble_sort(int arr[],int n)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}

int main() {
    int arr[] = {1, 4, 2, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n);

    print_array(arr, n);

    return 0;
}
