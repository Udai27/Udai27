#include <stdio.h>

void printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubblesort(int *a, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        printf("Number of pass %d\n", i + 1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}
int main()
{
    int a[] = {7, 54, 8, 5, 84, 59, 74, 47, 89, 50};
    // int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    printarray(a, n); // Printing array before sorting
    bubblesort(a, n); // Sorting the array
    printarray(a, n); // Printing the array after sorting
    return 0;
}

// NOTE : Here the array is taking less number of passes for sorting the array because of the optimization of the code which we have done in the code. 