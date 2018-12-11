//
//  main.cpp
//  K - 机会渺茫
//
//  Created by tly on 2017/8/20.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

vector <int> a, b;

void find(long long n, vector <int> &p)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            n = n / i;
            p.push_back(i);
            i--;
        }
        if (n == 1) break;
    }

}

int main()
{
    long long n, m;
    scanf("%lld%lld", &n, &m);
    
    a.push_back(1);
    b.push_back(1);
    
    find (n, a);
    find (m, b);
    
    printf("%d", a[1]);
    printf("%d", a[2]);
    
}
