#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        int m,n,i,k;
        scanf("%d%d",&m,&n);
        if(m==0 && n==0) break;
        for (i = m*100,k = 0; i < m*100+100;i++)
            if (i % n==0)
            {
                if (k == 0)
                {
                if (i%100 < 10) printf("0%d",i%100);
                else printf("%d",i%100);
                k = 1;
                }
                else
                {
                if (i%100 < 10) printf(" 0%d",i%100);
                else printf(" %d",i%100);
                }
            }
        printf("\n");
    }
}
