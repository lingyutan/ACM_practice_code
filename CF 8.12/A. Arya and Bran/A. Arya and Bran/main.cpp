//
//  main.cpp
//  A. Arya and Bran
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
    int a[n];
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 8)
        {
            a[i + 1] += a[i] - 8;
            a[i] = 8;
        }
        k -= a[i];
        if (k <= 0)
        {
            printf ("%d\n" , i + 1);
            return 0;
        }
    }
    printf ("-1\n");
}
