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
    for (int i = 0; i < n - 1; i++)// loop for number of passes
    {
        for (int j = 0; j < n - 1 - i; j++)// loop for comparisons
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int a[] = {7, 54, 8, 5, 84, 59, 74, 47, 89, 50};
    int n = 10;
    printarray(a, n);//Printing array before sorting
    bubblesort(a, n);//Sorting the array
    printarray(a, n);//Printing the array after sorting
    return 0;
}