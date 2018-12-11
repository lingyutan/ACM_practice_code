#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
double f[4];
int main()
{
    int t,i,j;
    double angle1,angle2,angle;
    scanf("%d",&t);
    for (i=0;i<t;i++)
    {
        for (j=0;j<4;j++)
            scanf("%lf",&f[j]);
        angle1=atan(f[1]/f[0]);
        angle2=atan(f[3]/f[2]);
        angle=(angle1-angle2);
        angle=angle/3.141592653589*180.0;
        if (angle<0) angle=-angle;
        if (angle>180) angle=360-angle;
        if (f[1]*f[3]<0||f[0]*f[2]<0) angle=180-angle;
        printf("%.2f\n",angle);
    }
}
