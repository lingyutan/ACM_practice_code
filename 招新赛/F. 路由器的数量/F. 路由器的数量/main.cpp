//
//  main.cpp
//  F. 路由器的数量
//
//  Created by Nick Tan on 2018/1/13.
//  Copyright © 2018年 Nick Tan. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    int a[1005];
    memset(a, 0, sizeof(a));
    
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x - 1] = 1;
    }
    int ans = 0;
    for (int i = 0; i < 1005; i++)
    {
        if (!a[i]) continue;
        else
        {
            for (int j = i + k; j >= i; j--)
            {
                if (a[j] == 1)
                {
                    i = j + k;
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}
