//
//  main.cpp
//  L. 打水
//
//  Created by Nick Tan on 2018/1/13.
//  Copyright © 2018年 Nick Tan. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

const int maxn = 10000001;
int a[maxn];

void table()
{
    memset(a, 0, sizeof(a));
    a[1] = 1;
    for (int i = 2; i < maxn; i++)
    {
        a[i] += a[i - 1] + 2;
        if(i % 3 == 1) a[i]--;
    }
}

int main()
{
    table();
    
    int N;
    cin >> N;
    cout << a[N] << endl;
    return 0;
}
