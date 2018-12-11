//
//  main.cpp
//  B - The Blocks Problem
//
//  Created by tly on 2017/7/26.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;


vector <int> pile[30];
int n;

void find_block (int a, int &p, int &h){
    for (p = 0; p < n; p++)
        for (h = 0; h < pile[p].size(); h++)
            if (pile[p][h] == a) return;
}

void clear_above (int p, int h){
    for (int i = h + 1; i < pile[p].size(); i++)
    {
        int temp = pile[p][i];
        pile[temp].push_back(temp);
    }
    pile[p].resize(h + 1);
}


void move_to(int ap, int ah, int bp)
{
    for (int i = ah; i < pile[ap].size(); i++)
        pile[bp].push_back(pile[ap][i]);
    pile[ap].erase(pile[ap].begin()+ ah, pile[ap].begin() + pile[ap].size());
    
}
int main()
{
    cin >> n;
    string s1,s2;
    int a,b;
    for (int i = 0; i < n; i++) pile[i].push_back(i);
    while ((cin >> s1) && s1 != "quit"){
        cin >> a >> s2 >> b;
        int ap, ah, bp, bh;
        find_block(a,ap,ah);
        find_block(b,bp,bh);
        if (ap==bp) continue;
        if (s1 == "move") clear_above(ap, ah);
        if (s2 == "onto") clear_above(bp, bh);
        move_to(ap, ah, bp);
    }
    for(int i = 0; i < n; i++){
        printf("%d:",i);
        for(int j = 0; j < pile[i].size(); j++)
            printf(" %d",pile[i][j]);
        printf("\n");
    }
    return 0;
}





