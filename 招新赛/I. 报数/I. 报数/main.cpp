//
//  main.cpp
//  I. 报数
//
//  Created by Nick Tan on 2018/1/13.
//  Copyright © 2018年 Nick Tan. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int s = 0;
    for (int i = 2; i <= n; ++i)
        s = (s + k) % i;
    printf("%d\n", s+1);
    return 0;
}

