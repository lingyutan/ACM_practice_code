//
//  main.cpp
//  C. 多项式的整数解
//
//  Created by Nick Tan on 2018/1/13.
//  Copyright © 2018年 Nick Tan. All rights reserved.
//

#include <iostream>
#include <cmath>

const double eps = 1e-3;

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int a[8];
    for (int i = 0; i <= n; i++)
        cin >> a[i];
    int flag = 0;
    
    for (int i = -50; i <= 50; i++)
    {
        int sum = 0;
        for (int j = 0; j <= n; j++)
        {
            sum += a[j] * pow(i, n - j);
        }
        if (abs(sum) < eps)
        {
            cout << i << endl;
            flag = 1;
            break;
        }
    }
    if(!flag) cout << "no answer" << endl;
    
}
