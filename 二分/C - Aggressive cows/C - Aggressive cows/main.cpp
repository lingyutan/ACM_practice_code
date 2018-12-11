//
//  main.cpp
//  C - Aggressive cows
//
//  Created by tly on 2017/8/4.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 100005;
int N, C;
int a[maxn];

bool check(int mid)
{
    int l = 0;
    for (int i = 1; i < C; i++)
    {
        int r = l + 1;
        while (a[r] - a[l] < mid && r < N) r++;
        if (r == N) return false;
        l = r;
    }
    return true;
}

int main()
{
    scanf ("%d%d",&N,&C);
    for (int i = 0; i < N; i++)
        scanf ("%d", &a[i]);
    sort (a, a + N);
    
    int l = 0, r = INT_MAX;
    while (r - l > 1)
    {
        double mid = (l + r) / 2;
        if (check(mid)) l = mid;
        else r = mid;
    }
    printf("%d", l);
}
