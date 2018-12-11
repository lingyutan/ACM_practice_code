#include <stdio.h>
#include <math.h>
#include <iostream>
char a[100];
int main()
{
    int t,i,j;
    scanf ("%d",&t);
    for (i=0;i<t;i++)
    {
        scanf("%s",a);
        printf("6");
        for (j=6;j<11;j++)
            printf("%c",a[j]);
        printf("\n");
    }
}
