#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
int f[100][3];
int main()
{
    int t,i;
    float angle;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&f[i][j]);
    float angle1,angle2;
    for(i=0;i<t;i++)
    {
        if(f[i][0]>=12) f[i][0]-=12;
        angle1=f[i][0]*30.0+f[i][1]*0.5+f[i][2]*0.5/60.0;
        angle2=f[i][1]*6.0+f[i][2]*0.1;
        angle=(angle1-angle2);
        if (angle<0) angle=-angle;
        if (angle>180) angle-=180;
        printf ("%.0f",angle);
    }
}
