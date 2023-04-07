#include <stdio.h>
#include <conio.h>
int main()
{
    int ary[5], a, j, temp, i;
    printf("enter array elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &ary[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (ary[i] > ary[j]){
            temp = ary[i];
            ary[i] = ary[j];
            ary[j] = temp;
            }
        }


    }
    printf("array elements  in assending order\n");
    for(i=0;i<5;i++){
        printf("%d \t",ary[i]);
    }
}