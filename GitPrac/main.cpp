//
//  main.cpp
//  GitPrac
//
//  Created by SEUNGCHAN on 2020/04/29.
//  Copyright © 2020 SEUNGCHAN. All rights reserved.
//

#include "stdio.h"
void name_out(int var)
{
    printf("내 나이는 %d\n",var);
    return;
}

int main()
{
    int var;
    printf("hello!\n");
    printf("니 나이 몇살이노?\n");
    scanf("%d",&var);
    name_out(var);
    return 0;
}


