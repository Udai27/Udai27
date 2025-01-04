#include <stdio.h>
//Indextation of array starts from 1 
void LinearSearch(int *arr, int n)
{
    int num, loc = -1;
    printf("Enter the element to search in the array\n");
    scanf("%d", &num);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            loc = i+1;
        }
    }
    if (loc != -1)
    {
        printf("%d is found at %d", num, loc);
    }
    else
    {
        printf("%d not found!!", num);
    }
}
int main()
{
    int arr[20], n;
    printf("Enter how many elements you want to enter in the array(max 20 can be inserted) ");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    LinearSearch(arr, n);

    return 0;
}