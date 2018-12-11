//
//  main.cpp
//  D - Brave Game
//
//  Created by tly on 2017/9/10.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int C;
    cin >> C;
    while (C--)
    {
        int n, m;
        cin >> n >> m;
        if (n % (m + 1)) cout << "first" << endl;
        else cout << "second" << endl;
    }
    return 0;
}
