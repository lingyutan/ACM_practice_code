//
//  main.cpp
//  K - 数塔
//
//  Created by tly on 2017/8/13.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int C;
    scanf ("%d", &C);
    while (C--)
    {
        int N;
        scanf ("%d", &N);
        int a[100][100];
        for (int i = 0; i < N; i++)
            for (int j = 0; j <= i; j++)
                scanf ("%d", &a[i][j]);
        for (int i = N - 2; i >= 0; i--)
            for (int j = 0; j <= i; j++)
                a[i][j] += max(a[i + 1][j], a[i + 1][j + 1]);
        printf("%d\n", a[0][0]);
    }
}
