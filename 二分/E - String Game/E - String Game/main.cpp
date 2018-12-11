//
//  main.cpp
//  E - String Game
//
//  Created by tly on 2017/8/6.
//  Copyright © 2017年 admin. All rights reserved.
//
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
const int maxn = 200005;
char str1[maxn];
char str2[maxn];
int a[maxn];
int b;
int len;

bool check (int x)
{
    int k = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i] > x && str1[i] == str2[k]) k++;
        if (k == strlen(str2)) return true;
    }
    return false;
}

int main()
{
    scanf ("%s",str1);
    scanf ("%s",str2);
    len = (int) strlen(str1);
    for (int i = 1; i <= len; i++)
    {
        scanf("%d", &b);
        a[b - 1] = i;
    }
    int l, r;
    l = -1; r = len + 10;
    int mid;
    while (r - l > 1)
    {
        mid = (r + l) / 2;
        if(check(mid)) l = mid;
        else r = mid;
    }
    printf("%d",l);
    return 0;
}

// Time Limit exceed.
