#include <stdio.h>
// When array is unsorted linear search is used!!
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

//When array is sorted binary search is used!!
int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    //Keep searching unitl low and high converges
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    // int arr[] = {1,2,48,45,648,4,101,54,487,94,5265,496,98};
    // int size = sizeof(arr)/sizeof(int);
    // int element = 101;
    // int searchIndex = linearSearch(arr,size,element);
    // printf("The element %d was found at index %d",element,searchIndex);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,587};
    int element = 587;
    int size = sizeof(arr) / sizeof(int);
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d", element, searchIndex);
    return 0;
}