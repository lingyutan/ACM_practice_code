//
//  main.cpp
//  M - Coin Game
//
//  Created by tly on 2017/9/14.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int n, k;
        cin >> n >> k;
        bool flag = false;
        if ((k == 1 && n % 2) || (k >= n)) flag = true;
        if (flag) printf ("Case %d: first\n", i);
        else printf ("Case %d: second\n", i);
    }
}
