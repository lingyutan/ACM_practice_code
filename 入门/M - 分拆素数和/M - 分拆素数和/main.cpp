//
//  main.cpp
//  M - 分拆素数和
//
//  Created by tly on 2017/8/12.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

bool is_prime (int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main()
{
    int n, ans;
    while (scanf("%d", &n) && n)
    {
        ans = 0;
        for(int i = 2; i < n / 2; i++)
            if (is_prime(i) && is_prime(n-i)) ans++;
        printf("%d\n",ans);
    }
    return 0;
}
