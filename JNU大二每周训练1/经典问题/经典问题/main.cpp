//
//  main.cpp
//  经典问题
//
//  Created by tly on 2017/10/15.
//  Copyright © 2017年 admin. All rights reserved.
//

/*
#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 100005;

struct interval
{
    int begin;
    int end;
}A[maxn], B[maxn];

bool cmp(interval a, interval b)
{
    if (a.begin == b.begin)
        return a.end > b.end;
    return a.begin < b.begin;
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    
    for (int i = 0; i < n; i++)
        scanf("%d%d", &A[i].begin, &A[i].end);
    for (int i = 0; i < m; i++)
        scanf("%d%d", &B[i].begin, &B[i].end);
    
    sort(A, A + n, cmp);
    sort(B, B + m, cmp);
    
    int p1 = 0;
    int p2 = 0;
    int ans = 0;
    
    while (p1 == n && p2 == m)
    {
        
    }
}
*/



#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 100005;

struct interval
{
    int begin;
    int end;
}A[maxn], B[maxn];

bool num[100000005];

bool cmp(interval a, interval b)
{
    if (a.begin == b.begin)
        return a.end < b.end;
    return a.begin < b.begin;
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    
    for (int i = 0; i < n; i++)
        scanf("%d%d", &A[i].begin, &A[i].end);
    for (int i = 0; i < m; i++)
        scanf("%d%d", &B[i].begin, &B[i].end);
    
    sort(A, A + n, cmp);
    sort(B, B + m, cmp);
    
    int p1 = 0;
    int p2 = 0;
    
    for (int i = A[0].begin; i <= A[0].end; i++)
        num[i] = true;
    while (p1 - n)
    {
        
    }
}


