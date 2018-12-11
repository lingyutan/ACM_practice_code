//
//  main.cpp
//  L - Sky数
//
//  Created by tly on 2017/8/12.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int c (int n, int x)
{
    int a[5] = {0, 0, 0, 0, 0};
    int i = 0;
    while (n)
    {
        a[i++] = n % x;
        n /= x;
    }
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum += a[i];
    return sum;
}

int main()
{
    int n;
    while (scanf("%d", &n) && n != 0)
    {
        if (c(n, 10) == c(n, 12) && c(n, 10) == c(n, 16))
            printf("%d is a Sky Number.", n);
        else printf("%d is not a Sky Number.", n);
        printf("\n");
    }
    return 0;
}
