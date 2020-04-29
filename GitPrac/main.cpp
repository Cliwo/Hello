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

int dateToday(){
    int date = 13;
    return date;
}

int main()
{

    printf("오늘 날짜는?\n");
    int date=0;
    date = dateToday();
    printf("%d일\n",date);
    
    
    
    int var;
    printf("hello!\n");
    printf("니 나이 몇살이노?\n");
    scanf("%d",&var);
    name_out(var);

    return 0;
}


