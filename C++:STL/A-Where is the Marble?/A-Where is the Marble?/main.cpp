//
//  main.cpp
//  A-Where is the Marble?
//
//  Created by tly on 2017/7/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>

#include <algorithm>

using namespace std;

int main()

{
    int a[10001];
    int n,q,x,t=1;
    while (cin >> n >> q && n+q){
        printf("CASE# %d:\n",t++);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        while (q--){
            cin >> x;
            int y = lower_bound(a, a + n, x) - a;
            if (a[y] == x)
                printf("%d found at %d\n",x,y+1);
            else printf("%d not found\n",x);
        }
            
        }
}
