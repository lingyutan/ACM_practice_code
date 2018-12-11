//
//  main.cpp
//  C. Leha and Function
//
//  Created by tly on 2017/8/18.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int a[200005];
int b[200005];
int p[200005];
int h[200005];

int cmp( const int &a, const int &b ){
    if( a > b )
        return 1;
    else
        return 0;
}

int main()
{
    int m;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(p, 0, sizeof(p));
    
    scanf ("%d", &m);
    
    for (int i = 0; i < m; i++)
        scanf ("%d", &a[i]);
    for (int i = 0; i < m; i++)
    {
        scanf ("%d", &b[i]);
        p[i] = b[i];
    }
    
    sort (a, a + m, cmp);
    sort (b, b + m);
    
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            if (p[i] == b[j])
            {
                h[i] = a[j];
                b[j] = 0;
                break;
            }
    
        for (int i = 0; i < m; i++)
        printf ("%d ", h[i]);
    return 0;
}
