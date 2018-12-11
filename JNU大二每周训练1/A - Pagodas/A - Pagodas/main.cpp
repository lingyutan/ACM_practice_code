//
//  main.cpp
//  A - Pagodas
//
//  Created by tly on 2017/10/15.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int GCD(int m,int n)
{
    if(m<0)
        cout<<"error input.\n";
    else if (m < n&&m>0)
    {
        int tmp = m;
        m = n;
        n = tmp;
    }
    if (n == 0)
        return m;
    else
        return GCD(n,m % n);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n, a, b;
        scanf("%d%d%d", &n, &a, &b);
        n = n / GCD(a,b);
        if (n % 2 == 0)
            printf("Case #%d: Iaka\n", i);
        else printf("Case #%d: Yuwgna\n", i);
    }
    return 0;
}
