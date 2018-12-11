//
//  main.cpp
//  E. 王哥的聚会
//
//  Created by Nick Tan on 2018/1/13.
//  Copyright © 2018年 Nick Tan. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int q;
    cin >> q;
    
    while (q--)
    {
        int k;
        cin >> k;
        int ans = 0;
        for (int i = 1; i <= n; i++)
            if(m >= k - i && k - i > 0) ans++;
        cout << ans << endl;
    }
    return 0;
}
