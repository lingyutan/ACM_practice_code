#include <stdio.h>
#include <iostream>
using namespace std;
long long int f[100];
int main()
{
    f[0]=0;
    f[1]=1;
    for (int i=2;i<60;i++)
        f[i]=f[i-1]+f[i-2];
    int b;
    while(true)
    {
        scanf("%d",&b);
        if(b==-1) break;
        printf("%lld\n",f[b]);
    }
    return 0;
}
