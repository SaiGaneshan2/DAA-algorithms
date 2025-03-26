#include<stdio.h>

void merge(int arr[],int lb,int ub,int mid)
{
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[ub+1];
    while(i<=mid && j <= ub)
    {
        if(arr[i]<=arr[j])
        {
            
            b[k]=arr[i];
            i++;
        }else{
            b[k]=arr[j];j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {

            b[k]=arr[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid)
        {

            b[k]=arr[i];
            i++;
            k++;
        }
    }
    for(int x=lb;x<=ub;x++)
    {
        arr[x]=b[x];
    }
}

void mergesort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);
        merge(arr,lb,ub,mid);
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

    mergesort(arr, 0, n - 1);

    printArray(arr, n);

    return 0;
}
