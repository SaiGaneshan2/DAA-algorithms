#include<stdio.h>

int binery_search(int arr[],int size,int key)
{
    int start = 0;
    int end = size-1;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid]<key)
        {
            end = mid - 1;
        }
        else if(arr[mid]>key)
        {
            start = mid + 1;
        }
        else{
            return mid;
        }

        return 0;
    }
    
}


int main()
{
    int arr[]={1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key =3;
    int index=binery_search(arr,size,key);
    printf("the index can be found in %d",index);

}