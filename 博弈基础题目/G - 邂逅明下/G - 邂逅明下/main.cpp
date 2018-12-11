//
//  main.cpp
//  G - 邂逅明下
//
//  Created by tly on 2017/9/13.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, p, q;
    while (scanf("%d%d%d", &n, &p, &q) != EOF)
    {
        if(n % (p + q) && n % (p + q) <= p) printf("LOST\n");
        else printf("WIN\n");
    }
    return 0;
}
