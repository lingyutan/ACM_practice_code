//
//  main.c
//  task-C
//
//  Created by Nick Tan on 2018/4/22.
//  Copyright © 2018年 Nick Tan. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i,j;
    for(i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
        printf("%d ", i);
}
