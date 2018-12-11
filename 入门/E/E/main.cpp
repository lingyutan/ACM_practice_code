#include <stdio.h>
#include <iostream>
using namespace std;
int a[100];
int main()
{
    long hanoi(int x);
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
        printf("%ld\n",hanoi(a[i]));
    }
    
}

long hanoi(int x)
{
    long hanoi1(int x);
    long step;
    if (x==1) step=2;
    else step=2*hanoi1(x-1)+2;
    return(step);
}
long hanoi1(int x)
{
    long step;
    if (x==1) step=1;
    else step=3*hanoi1(x-1)+1;
    return(step);
}
