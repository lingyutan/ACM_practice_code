//
//  main.cpp
//  F - 取石子游戏
//
//  Created by tly on 2017/9/13.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
typedef long long LL;

bool flag;
LL n;

int main()
{
    LL fi[200];
    fi[0] = 1;
    fi[1] = 2;
    
    for (int i = 2; i < 200; i++)
        fi[i] = fi[i - 2] + fi[i - 1];

    while (scanf("%lld", &n) && n != 0)
    {
        flag = false;
        for (int i = 1; i < 200; i++)
            if (fi[i] == n) flag = true;
        
        if (flag) printf("Second win\n");
        else printf("First win\n");
    }
    return 0;
}
