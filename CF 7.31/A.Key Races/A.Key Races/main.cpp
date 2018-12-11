//
//  main.cpp
//  CF 7.31 A.Key Races
//
//  Created by tly on 2017/7/31.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int a, b;
    a = s * v1 + 2 * t1;
    b = s * v2 + 2 * t2;
    if (a < b)
        cout << "First" << endl;
    if (a > b)
        cout << "Second" << endl;
    if (a == b)
        cout << "Friendship" << endl;
}
