#include <stdio.h>

void printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// void selectionSort(int*a,int n){
//     printf("Running selection sort...\n");
//     int indexOfMin,temp;
//     for (int i = 0; i < n-1; i++)
//     {
//         indexOfMin = i;
//         for (int j = i+1; j < n; j++)
//         {
//             if (a[j]<a[indexOfMin])
//             {
//                 temp = a[indexOfMin];
//                 a[indexOfMin] = a[j];
//                 a[j] = temp;
//                 /*This code is correct but what it is doing is it is swapping value each time when it founds a minimum element which is increasing the swaps and hence the time complexity*/
//             }

//         }

//     }

// }

void selectionSort(int *a, int n)
{
    printf("Running selection sort...\n");
    int indexOfMin, temp;
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[indexOfMin])
                indexOfMin = j;
        }
        temp = a[indexOfMin];
        a[indexOfMin] = a[i];
        a[i] = temp;
    }
}
int main()
{
    // 0    1    2   03  4  5
    // 5    8    9   15  0   2
    int a[] = {5, 8, 9, 15, 0, 2};
    int n = 6;
    printarray(a, n);
    selectionSort(a, n);
    printarray(a, n);
    return 0;
}