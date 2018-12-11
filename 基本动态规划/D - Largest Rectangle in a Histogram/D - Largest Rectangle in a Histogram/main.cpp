//
//  main.cpp
//  D - Largest Rectangle in a Histogram
//
//  Created by tly on 2017/8/14.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;
const int maxn = 100005;

struct rectangle
{
    ll h;
    int l;
    int r;
}a[maxn];

int main()
{
    int n;
    while (scanf("%d", &n) && n)
    {
        for (int i = 0; i < n; i++)
            scanf("%lld", &a[i].h);
        a[0].l = 0;
        a[n - 1].r = n - 1;
        
        for (int i = 1; i < n; i++)
        {
            int temp = i;
            while (a[i].h <= a[temp - 1].h && temp)
            {
                temp = a[temp - 1].l;
            }
            a[i].l = temp;
        }//寻找该列长方形最优起始列
        
        for (int i = n - 2; i >= 0; i--)
        {
            int temp = i;
            while (a[i].h <= a[temp + 1].h && temp < n - 1)
            {
                temp = a[temp + 1].r;
            }
            a[i].r = temp;
        }//寻找该列长方形最优终止列
        
        ll max = 0;
        for (int i = 0; i < n; i++)
            if (max < a[i].h * (a[i].r - a[i].l + 1))
                max = a[i].h * (a[i].r - a[i].l + 1);
        cout << max << endl;
    }
    return 0;
}
