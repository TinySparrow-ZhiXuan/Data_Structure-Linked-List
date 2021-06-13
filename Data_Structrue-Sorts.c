#include <stdio.h>
#include <stdlib.h> 
void PrintArray(int *arr,int front,int end)
{
    for(int i=front;i<end;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void Swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int Partition(int *arr,int front,int end) //排列後切分傳回i(pivot position)
{
    int pivot=arr[end];
    int i=front-1;
    for(int j=front;j<end;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            Swap(&arr[i],&arr[j]);
        }
    }
    i++;
    Swap(&arr[i], &arr[end]);//把pivot插入數列中 
    return i;
}
void QuickSort(int *arr,int front,int end)
{
    if(front<end)
    {
        int pivot=Partition(arr,front,end);
        QuickSort(arr,front,pivot-1);
        QuickSort(arr,pivot+1,end);
    }
}
int main()
{
    int n=10; //size of array
    int a[]={26,11,8,2,54,73,10,69,33,5};
    QuickSort(a,0,n-1);
    PrintArray(a,0,n);
    return 0;
}

