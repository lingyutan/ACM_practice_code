//
//  main.cpp
//  A - Can you solve this equation?
//
//  Created by tly on 2017/8/3.
//  Copyright © 2017年 admin. All rights reserved.
//
#include <iostream>
#include <cmath>
using namespace std;
double Y;
bool check(double x)
{
    if (8 * pow(x, 4) + 7 * pow(x, 3) + 2 * pow(x, 2) + 3 * x + 6 > Y) return true;
    else return false;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        scanf ("%lf",&Y);
        double l = -1;
        double r = 101;
        double mid;
        while (r - l > 1e-6)
        {
            mid = (r + l) / 2;
            if(check(mid)) r = mid;
            else l = mid;
        }
        if (r < 0 || r > 100) printf("No solution!\n");
        else printf ("%.4f\n",r);
    }
}
