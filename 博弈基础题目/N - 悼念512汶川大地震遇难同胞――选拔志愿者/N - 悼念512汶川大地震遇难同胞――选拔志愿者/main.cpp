//
//  main.cpp
//  N - 悼念512汶川大地震遇难同胞――选拔志愿者
//
//  Created by tly on 2017/9/14.
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
        if (n %(m + 1)) printf ("Grass\n");
        else printf ("Rabbit\n");
    }
    return 0;
}
