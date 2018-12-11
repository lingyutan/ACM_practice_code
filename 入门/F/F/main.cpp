#include <stdio.h>
#include <math.h>
#include <iostream>
int a[100][40];
int main()
{
    int t,i,j,k;
    int m,n;
    scanf("%d",&t);
    int min;
    for (i=0;i<t;i++)
    {
        scanf("%d%d",&n,&m);
        for (j=0;j<n;j++)
            scanf("%d",&a[i][j]);
        
        for (k=0,min=a[i][0];k<n;k++)
            if (min>a[i][k])
                min=a[i][k];
        printf("%d\n",(100-min)*(100-min));
    }
}

