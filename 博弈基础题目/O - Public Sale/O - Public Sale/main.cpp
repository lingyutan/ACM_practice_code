//
//  main.cpp
//  O - Public Sale
//
//  Created by tly on 2017/9/14.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int m, n;
    while (scanf ("%d%d", &m, &n) != EOF)
    {
        if (m <= n)
        {
            printf ("%d", m);
            for (int i = m + 1; i <= n; i++)
                printf (" %d", i);
            printf ("\n");
        }
        else
        {
            int x = m % (n + 1);
            if (x) printf ("%d\n", x);
            else printf ("none\n");
        }
    }
    return 0;
}
