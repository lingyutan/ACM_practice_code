//
//  main.cpp
//  D - Brainman
//
//  Created by tly on 2017/8/15.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int tmp[1000];
int ans;
int a[1005];

void merge(int *a, int l, int r)
{
    if (l == r) return;
    
    int m = (l + r) / 2;
    merge(a, l, m);
    merge(a, m + 1, r);
    int i = l, j = m + 1, k = 0;
    
    while (i <= m && j <= r)
    {
        if (a[i] <= a[j])
            tmp[k++] = a[i++];
        else
        {
            tmp[k++] = a[j++];
            ans += m + 1 - i;
        }
    }
    
    while (i <= m)
        tmp[k++] = a[i++];
    while (j <= r)
        tmp[k++] = a[j++];
    for (int c = 0; c < k; c++)
        a[c + l] = tmp[c];
}

int main()
{
    int t;
    scanf("%d", &t);
    int k = t;
    while (t--)
    {
        ans = 0;
        int n;
        scanf("%d", &n);
        
        for (int i = 0; i < n; i++)
            scanf("%d", a + i);
        
        merge(a, 0, n - 1);
        printf("Scenario #%d:\n%d\n\n", k - t, ans);
    }
    return 0;
}
