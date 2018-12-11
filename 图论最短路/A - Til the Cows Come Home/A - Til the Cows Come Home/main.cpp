//
//  main.cpp
//  A - Til the Cows Come Home
//
//  Created by tly on 2017/8/17.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

const int inf = 100005;
int T, N;
int dp[1000][1000];

int main()
{
    scanf ("%d%d", &T, &N);
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            if (i == j) dp[i][j] = 0;
            else dp[i][j] = inf;
        }
    //初始化数组
    
    for (int i = 0; i < T; i++)
    {
        int a, b, l;
        scanf ("%d%d%d", &a, &b, &l);
        dp[a - 1][b - 1] = l;
        dp[b - 1][a - 1] = l;
    }
    //输入
    
    for (int k = 0; k < N; k++)
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                if (dp[i][k] < inf && dp[k][j] < inf)
                    if (dp[i][k] + dp[k][j] < dp[i][j])
                        dp[i][j] = dp[i][k] + dp[k][j];
    //Floyd算法
    
    printf ("%d", dp[N - 1][0]);
    
}
