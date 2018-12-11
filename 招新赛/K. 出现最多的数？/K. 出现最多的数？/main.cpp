//
//  main.cpp
//  K. 出现最多的数？
//
//  Created by Nick Tan on 2018/1/13.
//  Copyright © 2018年 Nick Tan. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int a[10];
    memset(a, 0, sizeof(a));
    
    int l, r;
    cin >> l >> r;
    if (!l) a[0]++;
    
    for (int i = l; i <= r; i++)
    {
        int k = i;
        while (k)
        {
            a[k % 10]++;
            k /= 10;
        }
    }
    int max = 0;
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            ans = i;
        }
    }
    cout << ans << endl;
}
