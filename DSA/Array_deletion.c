#include<stdio.h>

//Code for traversal
void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");   
}
int indDeletion(int arr[],int index,int size){
    if (index > size)
    {
        return -1;
    }
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    
}
int main()
{
    int arr[5] = {1,2,5,9,8};
    int size = 5,index = 2;
    display(arr,size);
    indDeletion(arr,index,5);
    size-=1;
    display(arr,size);
    
     return 0;
}