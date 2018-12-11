//
//  main.cpp
//  B - 最大连续子序列
//
//  Created by tly on 2017/8/13.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

const int maxn = 10005;
int a[maxn];

struct answer
{
    int max = 0;
    int begin;
    int end;
}ans;

int main()
{
    int k;
    
    while (scanf("%d", &k) && k)
    {
        int sum = 0;
        for (int i = 0; i < k; i++) scanf("%d", &a[i]);
        ans.begin = 0;
        ans.end = 0;
        int temp1 = 0, temp2 = 0;
        for (int i = 0; i < k; i++)
        {
            sum += a[i];
            if (sum < 0)
            {
                
            }
        }
    }
    return 0;
}
