#include<stdio.h>

void maxmin(int arr[],int lb,int ub,int *min,int *max)
{
    int mid;
    if(lb==ub)
    {
        *min=*max=arr[lb];
        return;
    }
    if(lb == ub-1)
    {
        if(arr[lb]>arr[ub])
        {
            *min=arr[ub];
            *max=arr[lb];
        }
        else{
            *min=arr[lb];
            *max=arr[ub];
        }
        return;
    }
    int leftmin,leftmax,rightmin,rightmax;
    mid=(lb+ub)/2;
    maxmin(arr,lb,mid,&leftmin,&leftmax);
    maxmin(arr,mid+1,ub,&rightmin,&rightmax);
    if(leftmax<rightmax)
    {
        *max=rightmax;
    }
    else{
        *max=leftmax;
    }
    if(leftmin<rightmin)
    {
        *min=leftmin;
    }
    else{
        *min=rightmin;
    }
}


int main() {
    int arr[] = {10, 20, 5, 8, 25, 18, 30, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;

    maxmin(arr, 0, n - 1, &max, &min);

    printf("Maximum Element: %d\n", max);
    printf("Minimum Element: %d\n", min);

    return 0;
}