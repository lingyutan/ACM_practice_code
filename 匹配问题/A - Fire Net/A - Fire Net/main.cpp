//
//  main.cpp
//  A - Fire Net
//
//  Created by tly on 2017/10/11.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

char map[4][4];
int n;
int ans;
int temp;

bool find(int x, int y)
{
    for (int i = x; i >= 0; i --)
    {
        if (map[x][i] == 'O') return false;
        if (map[x][i] == 'X') break;
    }
    for (int i = x; i < n; i ++)
    {
        if (map[x][i] == 'O') return false;
        if (map[x][i] == 'X') break;
    }
    for (int i = y; i >= 0; i --)
    {
        if (map[i][y] == 'O') return false;
        if (map[i][y] == 'X') break;
    }
    for (int i = y; i < n; i ++)
    {
        if (map[i][y] == 'O') return false;
        if (map[i][y] == 'X') break;
    }
    return true;
}

void dfs()
{
    if (temp > ans)
        ans = temp;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (find(i, j) && map[i][j] == '.')
            {
                map[i][j] = 'O';
                temp++;
                dfs();
                map[i][j] = '.';
                temp--;
            }
}

int main()
{
    while (scanf ("%d", &n) && n)
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> map[i][j];
        
        temp = 0;
        ans = 0;
        
        dfs();
        
        printf ("%d\n", ans);
    }
    return 0;
}
