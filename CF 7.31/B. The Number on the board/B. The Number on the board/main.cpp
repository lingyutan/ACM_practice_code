//
//  main.cpp
//  B. The Number on the board
//
//  Created by tly on 2017/7/31.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main ()
{
    int k;
    cin >> k;
    char num[100005];
    scanf("%s",num);
    long len = strlen(num);
        sort(num, num + len);
    int sum = 0;
    for (int i = 0; i < len; i++)
        sum += num[i] - '0';
    int differ = k - sum;
    int ans = 0;
    int i = 0;
    while (differ > 0)
    {
        differ -= '9' - num[i];
        i++;
        ans++;
    }
    cout << ans << endl;
}
