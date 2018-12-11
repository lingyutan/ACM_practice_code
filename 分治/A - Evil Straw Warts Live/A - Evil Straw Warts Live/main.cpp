//
//  main.cpp
//  A - Evil Straw Warts Live
//
//  Created by tly on 2017/7/28.
//  Copyright © 2017年 admin. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char str[8005];
    while (n--)
    {
        cin >> str;
        int ans = 0;
        int num[30] = {0};
        for (int i = 0; str[i] != '\0'; i++)
            num[str[i] - 'a']++;
        int k = 0;
        for (int i = 0; i < 26; i++)
            if (num[i] % 2) k++;
        if (k > 1)
        {
            cout << "Impossible" << endl;
            continue;
        }
        for (long l = 0, r = strlen(str) - 1; l < r; l++, r--)
        {
            if (str[l] != str[r])
            {
                long p = l, q = r;
                while (str[++p] != str[r]);
                while (str[--q] != str[l]);
                if (p - l < r - q)
                {
                    ans += p - l;
                    for (long i = p; i > l; i--)
                        str[i] = str[i - 1];
                }
                else
                {
                    ans += r - q;
                    for (long i = q; i < r; i++)
                        str[i] = str[i + 1];
                }
            }
        }
        cout << ans << endl;
    }
}
