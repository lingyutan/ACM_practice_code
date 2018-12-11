//
//  main.cpp
//  A - Robberies
//
//  Created by tly on 2017/8/7.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

double P;
int N;
int sum;
double dp[10005];

struct bank
{
    int m;
    double p;
}a[100];

int solve()
{
    for (int i = 0; i < N; i++)
        for (int j = sum; j > 0; j--)
            if(a[i].m <= j)
            dp[j] = max(dp[j], dp[j - a[i].m] * a[i].p);
    
    for(int i = sum; i >= 0; i--)
        if(dp[i] > P) return i;
    return 0;
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        memset(dp,0,sizeof(dp));
        dp[0] = 1;
        sum = 0;
        
        scanf("%lf%d", & P, &N);
        P = 1 - P;
        
        for (int i = 0; i < N; i++)
        {
            scanf("%d%lf", &a[i].m, &a[i].p);
            sum += a[i].m;
            a[i].p = 1 - a[i].p;
        }
        
        printf("%d\n", solve());
        
    }
}
