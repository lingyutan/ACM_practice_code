//
//  main.cpp
//  A. Modular Exponentiation
//
//  Created by Nick Tan on 2018/1/8.
//  Copyright © 2018年 Nick Tan. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    int ans;
    if (n >= 27) ans = m;
    else ans = (m % (int)pow(2,n));
    cout << ans << endl;
    return 0;
}
