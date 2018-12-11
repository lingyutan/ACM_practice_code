#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    int m,n;
    int x,k,y;
    do
    {
        scanf("%d%d",&n,&m);
        if (m==0&&n==0) break;
        for (k=0,x=-9999;x<10000;x++)
        {
            y=n-x;
                if(y*x==m)
                {
                    printf("Yes\n");
                    k=1;
                    break;
                }
        }
        if (k==0) printf("No\n");
    }
    while(true);
}
