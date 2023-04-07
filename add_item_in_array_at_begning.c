#include <stdio.h>
int main()
{
    int a[100], i, n, item;
    printf("enter size of array:");
    scanf("%d", &n);
    printf("enter element in array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("insert  element in array:");
    scanf("%d", &item);
    n++;
    for (i = n; i > 1; i--)
    {
        a[i - 1] = a[i - 2];
    }
    a[0] = item;
    printf("result is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}