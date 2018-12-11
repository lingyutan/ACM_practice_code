//
//  main.cpp
//  A. 等差数列
//
//  Created by Nick Tan on 2018/1/13.
//  Copyright © 2018年 Nick Tan. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int ans;
        ans = (a + 2 * b + a * n) * n / 2;
        cout << ans << endl;
    }
}
