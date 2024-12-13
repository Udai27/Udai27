#include <stdio.h>
struct poly
{
    int coeff;
    int exp;
};

struct poly a[50], b[50], c[50];
int main()
{
    int deg1, deg2;
    printf("Enter the highest degree of polynomial 1\n");
    scanf("%d", &deg1);
    printf("Enter the highest degree of polynomial 2\n");
    scanf("%d", &deg2);

    printf("For polynomial 1\n");
    for (int i = 0; i <= deg1; i++)
    {
        printf("Enter the coefficient of of x^%d ", i);
        scanf("%d", &a[i].coeff);
        a[i].exp = i;
    }
    printf("First polynomial is = %d*x^%d", a[0].coeff, a[0].exp);
    for (int i = 1; i <= deg1; i++)
    {
        printf("+ %d*x^%d ", a[i].coeff, a[i].exp);
    }

    printf("\n");

    printf("For polynomial 2\n");
    for (int i = 0; i <= deg2; i++)
    {
        printf("Enter the coefficient of of x^%d ", i);
        scanf("%d", &b[i].coeff);
        b[i].exp = i;
    }
    printf("Second polynomial is = %d*x^%d", b[0].coeff, b[0].exp);
    for (int i = 1; i <= deg1; i++)
    {
        printf("+ %d*x^%d ", b[i].coeff, b[i].exp);
    }

    int maxDeg = (deg1 > deg2) ? deg1 : deg2;
    for (int i = 0; i <= maxDeg; i++)
    {
        c[i].coeff = 0;
        c[i].exp = i;
        if(i<=deg1) c[i].coeff += a[i].coeff;
        if(i<=deg2) c[i].coeff += b[i].coeff;
    }

    printf("\nThe resultant polynomial is = %d*x^%d",c[0].coeff,c[0].exp);
    for (int i = 1; i <=maxDeg; i++)
    {
        printf("+ %d*x^%d",c[i].coeff,c[i].exp);
    }
    
    
    return 0;
}