//
//  main.cpp
//  B - Euclid's Game
//
//  Created by tly on 2017/9/13.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

bool flag;

int main()
{
    int a, b;
    while (scanf ("%d%d", &a, &b) && a && b)
    {
        flag = false;
        if (a < b) swap(a, b);
        while(b)
        {
            if (a % b == 0 || a / b > 1) break;
            a = a - b;
            swap(a, b);
            if (flag) flag = false;
            else flag = true;
        }
        if (flag) printf("Ollie wins\n");
        else printf("Stan wins\n");
    }
    return 0;
}
