//
//  main.cpp
//  A. Generous Kefa
//
//  Created by tly on 2017/8/18.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char a[105];
int num[26];

int main()
{
    int n, k;
    memset(num, 0, sizeof(num));
    scanf ("%d%d", &n, &k);
    scanf("%s", a);
    for (int i = 0; i < n; i++)
        num[a[i] - 'a']++;
    for (int i = 0; i < 26; i++)
        if (num[i] > k)
        {
            printf("NO\n");
            return 0;
        }
    printf("YES\n");
}
