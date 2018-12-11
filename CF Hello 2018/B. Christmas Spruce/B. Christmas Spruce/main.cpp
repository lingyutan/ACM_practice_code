//
//  main.cpp
//  B. Christmas Spruce
//
//  Created by Nick Tan on 2018/1/8.
//  Copyright © 2018年 Nick Tan. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

const int maxn = 1005;
struct Node
{
    int father;
    int self;
    bool notleaf;
}vertex[maxn];

int main()
{
    memset(vertex, 0, sizeof(vertex));
    int n;
    cin >> n;
    vertex[1].self = 1;
    vertex[1].notleaf = true;
    
    for (int i = 2; i <= n; i++)
    {
        int a;
        cin >> a;
        vertex[i].self = i;
        vertex[i].father = a;
        vertex[vertex[i].father].notleaf = true;
    }
    int ans[maxn];
    memset(ans, 0, sizeof(ans));
    
    for (int i = 2; i <= n; i++)
    {
        if (vertex[i].notleaf == false) ans[vertex[i].father]++;
    }
    int flag = 0;
    for (int i = 1; i <= n; i++)
    {
        if(ans[i] == 1 || ans[i] == 2) flag = 1;
    }
    if (flag) cout << "No" << endl;
    else cout << "Yes" << endl;
    
    return 0;
}
