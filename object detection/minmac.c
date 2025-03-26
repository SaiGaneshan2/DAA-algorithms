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
            *max=arr[lb];
            *min=arr[ub];
        }
        else{
            *max=arr[ub];
            *min=arr[lb];
        }
        return;
    }
    mid = (lb+ub)/2;
    int leftmin,leftmax,rightmin,rightmax;
    maxmin(arr,lb,mid,&leftmin,&leftmax);
    maxmin(arr,mid+1,ub,&rightmin,&rightmax);
    if (leftmin < rightmin) { *min = leftmin; } 
    else { *min = rightmin; }

    if (leftmax > rightmax) { *max = leftmax; } 
    else { *max = rightmax; }
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