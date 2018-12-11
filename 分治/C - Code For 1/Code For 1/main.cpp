//
//  main.cpp
//  C - Code For 1
//
//  Created by tly on 2017/7/28.
//  Copyright © 2017年 admin. All rights reserved.
//
/*
 
 
#include <iostream>
#include <vector>
using namespace std;
vector <long> list;

void devide(long x)
{
    long a[3];
    if (x <= 1) return;
    devide(x / 2);
    a[2] = x % 2;
    devide(x / 2);
}

int main()
{
    long n, l, r;
    int ans = 0;
    cin >> n;

    list[i] = devide (n);
    cin >> l >> r;
    for (long i = l - 1; i < r; i++)
        if(list[i] == 1) ans += 1;
    cout << ans << endl;
}
 
 */


#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


vector <int> er, final;
void binary(long n)
{
    if (n > 1)
    binary (n / 2);
    er.push_back (n % 2);
}

int main()
{
    long n, l, r;
    int ans = 0;
    cin >> n;
    binary (n);
    long num = pow (2, (int) log2(n) + 1) - 1;
    for (long i = 0; i < num; i++)
        final.push_back(0);
    for (int i = 0; i < er.size(); i++)
    {
        if (er[i] == 1)
            for (long j = pow (2, i) - 1; j < final.size(); j += pow (2, i + 1))
                final[j] = 1;
    }
    cin >> l >> r;
    for (long i = l - 1; i < r; i++)
        if(final[i] == 1) ans += 1;
    cout << ans << endl;
}
