//
//  main.cpp
//  B. Game of the Rows
//
//  Created by tly on 2017/8/12.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, k;
    scanf ("%d%d", &n, &k);
    int a[k];
    int x = 0;
    int c = 0;
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 4 == 2) x++;
        if (a[i] % 2 == 1) a[i]++;
        c += a[i] / 4;
    }
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    if (sum > 8 * n || x > 3 * n - c) printf("NO\n");
    else printf("YES\n");
}
