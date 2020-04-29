//
//  main.cpp
//  GitPrac
//
//  Created by SEUNGCHAN on 2020/04/29.
//  Copyright © 2020 SEUNGCHAN. All rights reserved.
//

#include "stdio.h"

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
    
    
    
    return 0;
}
