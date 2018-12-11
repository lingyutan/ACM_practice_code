//
//  main.cpp
//  B - Dead Fraction
//
//  Created by tly on 2017/8/23.
//  Copyright © 2017年 admin. All rights reserved.
//


#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 1000000;
int main()
{
    char a[maxn];
    scanf ("%s", a);
    int n = (int)strlen(a);
    int num[maxn];
    for (int i = 0; i < n; i++)
        num[i] = a[i] - '0';
    printf ("%d", num[2]);
    return 0;
}
 
 
//不确定循环节
