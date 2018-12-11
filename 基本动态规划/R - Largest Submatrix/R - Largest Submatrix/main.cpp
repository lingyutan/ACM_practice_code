//
//  main.cpp
//  R - Largest Submatrix
//
//  Created by tly on 2017/8/14.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int m, n;
int matrix[1005][1005];

struct rectangle
{
    int h;
    int l;
    int r;
}a[1005];

int solve(int w)
{
    int maxn = 0;
    for (int t = 0; t < m; t++)
    {
        a[0].l = 0;
        a[n - 1].r = n - 1;
        for (int v = 0; v < n; v++)
            a[v].h = 0;
        for (int j = 0; j < n; j++)
            for (int k = t; k < m; k++)
            {
                if (matrix[k][j] % w == 0) a[j].h++;
                else break;
            }
        
        for (int i = 1; i < n; i++)
        {
            int temp = i;
            while (a[i].h <= a[temp - 1].h && temp)
            {
                temp = a[temp - 1].l;
            }
            a[i].l = temp;
        }
        
        for (int i = n - 2; i >= 0; i--)
        {
            int temp = i;
            while (a[i].h <= a[temp + 1].h && temp < n - 1)
            {
                temp = a[temp + 1].r;
            }
            a[i].r = temp;
        }
        for (int i = 0; i < n; i++)
        {
            int x = a[i].h * (a[i].r - a[i].l + 1);
            if (maxn < x) maxn = x;
        }
    }
    return maxn;
}

int main()
{
    while(scanf("%d", &m) != EOF)
    {
        char c;
        char temp[1005][1005];
        
        scanf("%d", &n);
        for (int i = 0; i < m; i++)
            scanf ("%s", temp[i]);
        
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c = temp[i][j];
                if (c == 'a') matrix[i][j] = 2;
                if (c == 'b') matrix[i][j] = 3;
                if (c == 'c') matrix[i][j] = 5;
                if (c == 'w') matrix[i][j] = 6;
                if (c == 'x') matrix[i][j] = 15;
                if (c == 'y') matrix[i][j] = 10;
                if (c == 'z') matrix[i][j] = 30;
            }
        }
        
        int ans;
        
        ans = max(solve (2), solve(3));
        ans = max(ans, solve(5));
        
        printf("%d\n", ans);
    }
    
}
