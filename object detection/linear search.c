#include<stdio.h>

int linear_search(int arr[],int key,int size)
{
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int index = linear_search(arr,3,size);
    printf("the index can be found in %d",index);
}