//
//  main.cpp
//  B. Godsend
//
//  Created by tly on 2017/8/18.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;

ll a;

int main()
{
    int n;
    int k = 0;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a);
        if (a % 2 == 0) k++;
    }
    if (k == n) printf("Second\n");
    else printf("First\n");
}
