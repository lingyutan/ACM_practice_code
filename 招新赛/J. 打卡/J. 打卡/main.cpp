//
//  main.cpp
//  J. 打卡
//
//  Created by Nick Tan on 2018/1/13.
//  Copyright © 2018年 Nick Tan. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while (T--)
    {
        int N, M;
        cin >> N >> M;
        
        int a[100];
        memset(a, 0, sizeof(a));
        
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            a[x - 1] = 1;
        }
        int max = 0;
        
        for (int i = 0; i < 100; i++)
        {
            for (int j = i; j < 100; j++)
            {
                int sum = 0;
                for (int k = i; k <= j; k++) sum += a[k];
                if(sum <= M && j - i > max) max = j - i;
            }
        }
        cout << max + 1 << endl;
    }
}
