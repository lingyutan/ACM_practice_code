//
//  main.cpp
//  B - Cable master
//
//  Created by tly on 2017/8/4.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int K, N;
const int maxn = 10005;
double a[maxn];

bool check(double x)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += (int)(a[i] / x);
    if (sum < K) return true;
    return false;
}

int main()
{
    cin >> N;
    scanf ("%d",&K);
    for (int i = 0; i < N; i++)
        scanf ("%lf",&a[i]);
        double l = 0;
        double r = 100005;
        double mid = 0.0;
        while (r - l > 1e-6)
        {
            mid = l + (r - l) / 2.0;
            if(check(mid)) r = mid;
            else l = mid;
        }
        printf ("%.2lf\n", floor (r*100) /100);
}
