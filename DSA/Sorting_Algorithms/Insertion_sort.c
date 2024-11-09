#include <stdio.h>

void printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertionSort(int *a, int n)
{
    int key, j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    int a[] = {12, 5, 78, 6, 50, 21, 7, 86, 10, 66};
    int n = 10;
    printarray(a, n);
    insertionSort(a, n);
    printarray(a, n);
    return 0;
}