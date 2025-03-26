#include<stdio.h>

void bubblesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}


void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[]={0,2,1,3,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    print_array(arr,n);
}