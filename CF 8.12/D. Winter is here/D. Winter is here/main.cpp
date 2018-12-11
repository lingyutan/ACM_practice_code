//
//  main.cpp
//  D. Winter is here
//
//  Created by tly on 2017/8/13.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int sum = 0;
int main()
{
    int n;
    scanf ("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    for (int i = 0; i < n; i++)
    {
        int k = 1;
        for (int j = i; j < n; j++)
            if (__gcd(a[i], a[j]) > 1)
            {
                sum += k * __gcd(a[i], a[j]);
                k++;
            }
    }
    printf("%d\n", sum);
}

//Wrong Answer
