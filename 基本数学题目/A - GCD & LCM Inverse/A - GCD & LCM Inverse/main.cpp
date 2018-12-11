//
//  main.cpp
//  A - GCD & LCM Inverse
//
//  Created by tly on 2017/8/18.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;

ll ans[2];

ll gcd(ll a,ll b)
{
    if(a==0)
    {
        return b;
    }
    else
    {
        return gcd(b % a,a);
    }
}


int main()
{
    ll a, b;
    while (scanf("%lld%lld", &a, &b) != EOF)
    {
        ll c = b / a;
        if (!(c % a))
        {
            ans[0] = a;
            ans[1] = b;
        }
        else
        {
            for (int i = sqrt(c); i > 0; i++)
            {
                ll x = c % i;
                if (x == 0 && gcd(i, c / i) == 1)
                {
                    ans[0] = a * i;
                    ans[1] = a * c / i;
                    break;
                }
            }
        }
        printf("%lld %lld\n", ans[0], ans[1]);
    }
    return 0;
}


//Time Limit Exceed
