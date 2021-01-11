#include<stdio.h>
#include "Rectangle.h"

bool Rectangle::InitMembers(const Point &ul,const Point &lr)
{
    if(ul.GetX()>lr.GetX() || ul.GetY()>lr.GetY())
    {
        printf("잘못된 위치정보 전달\n");
        return false;
    }
    upleft = ul;
    lowright=lr;
    return true;
}

void Rectangle::ShowRecInfo() const
{
    printf("좌 상단 : [%d,%d]\n",upleft.GetX(),upleft.GetY());
    printf("우 하단 : [%d,%d]\n\n",lowright.GetX(),lowright.GetY());
}