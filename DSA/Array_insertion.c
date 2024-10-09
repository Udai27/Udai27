#include<stdio.h>

//Code for traversal in Array
void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
printf("\n");
}

//Code for inserting an element in an array
int indInsertion(int arr[],int element,int index,int size,int capacity){
    if (size>=capacity)
    {
        printf("Insertion can't take place as array is already full!!!\n");
        return -1;
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int main()
{
    int arr[6] = {1,25,4,8,5,6};
    int size = 6, element = 56, index = 3;
    display(arr,size);
    indInsertion(arr,element,index,size,6);
    // size+=1;
    // display(arr,size);
     return 0;
}