#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    scanf ("%d",&t);
    int i,j;
    for (i = 0; i < t; i++)
    {
        int m,n;
        scanf ("%d%d",&n,&m);
        if (m == 0) printf ("1\n");
        else
        {
        if (n < m) printf("0\n");
        if (n == m) printf("1\n");
        if (n > m)
        {
            long long a,b;
            a=n;
            for (j = n-1; j > n-m; j--)
                a = a*j;
            b=m;
            for (j = m-1; j > 0; j--)
                b = b*j;
            printf("%lld\n",a/b);
        }
        }
    }
}
