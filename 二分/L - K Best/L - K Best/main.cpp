//
//  main.cpp
//  L - K Best
//
//  Created by tly on 2017/8/4.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int n, k;
const int maxn = 100005;


struct jewel
{
    int num;
    int v;
    int w;
    double s;
}a[maxn];

bool cmp(jewel a, jewel b)
{
    return a.s > b.s;
}

bool check (double x)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
        a[i].s = a[i].v - x * a[i].w;
    
    sort(a, a + n, cmp);
    
    for (int i = 0; i < k; i++)
        sum += a[i].s;
    return sum >= 0;
}

int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        a[i].num = i + 1;
        scanf ("%d%d", &a[i].v, &a[i].w);
    }
    double l = 0;
    double r = 100005;
    while (r - l > 1e-6)
    {
        double mid = l + (r - l) / 2;
        if (check(mid)) l = mid;
        
        else r = mid;
    }
    for (int i = 0; i < k; i++)
        printf("%d ", a[i].num);
}
