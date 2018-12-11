//
//  main.cpp
//  B. 遛猫
//
//  Created by Nick Tan on 2018/1/13.
//  Copyright © 2018年 Nick Tan. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int k, n;
    cin >> k >> n;
    int a[105];
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int sum_a = 0;
    for (int i = 0; i < n; i++)
        sum_a += a[i];
    
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] + a[i + 1] < k) a[i + 1] += k - a[i] - a[i + 1];
    }
    
    int sum_b = 0;
    for (int i = 0; i < n; i++)
        sum_b += a[i];
    
    cout << sum_b - sum_a << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
}
