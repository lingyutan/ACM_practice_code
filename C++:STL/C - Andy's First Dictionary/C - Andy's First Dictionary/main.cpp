//
//  main.cpp
//  C - Andy's First Dictionary
//
//  Created by tly on 2017/7/27.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <sstream>
using namespace std;

set <string> word;
int main() {
    string str;
    while(cin >> str)
    {
        string t;
        for (int i = 0; i < str.size(); i++)
        {
            if(isalpha(str[i]))
            {
                str[i] = tolower(str[i]);
                t += str[i];
            }
            else
            {
                word.insert(t);
                t = "";
            }
        }
        stringstream ss(str);
        word.insert(t);
        t = "";
    }
    for (set <string>::iterator it = word.begin(); it != word.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}
