//
//  main.cpp
//  G. 时分夹角
//
//  Created by Nick Tan on 2018/1/13.
//  Copyright © 2018年 Nick Tan. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;
    
    double angle1, angle2;
    angle1 = 30 * h + 0.5 * m;
    angle2 = 6 * m;
    double ans;
    ans = abs(angle1 - angle2);
    while (ans >= 360) ans -= 360;
    while (ans > 180) ans = 360 - ans;
    
    
    printf("%.2f\n", ans);
    return 0;
}
