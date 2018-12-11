//
//  main.cpp
//  E - Good Luck in CET-4 Everybody!
//
//  Created by tly on 2017/9/9.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

const int maxn = 1005;
bool a[maxn];

int main()
{
    a[0] = false;
    a[1] = true;
    a[2] = true;
    for (int i = 3; i < maxn; i++)
        {
            int j = 0;
            while (i - pow(2, j) >= 0)
            {
                int x = i - pow(2, j);
                if (!a[x]) a[i] = true;
                j++;
            }
        }
    int n;
    while (cin >> n)
    {
        if (a[n]) cout << "Kiki" << endl;
        else cout << "Cici" << endl;
    }
    return 0;
}
