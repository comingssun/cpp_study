#include <stdio.h>
#include "Point.h"
#include "Rectangle.h"
#include "Rectangle.cpp"
int main(void)
{
    Point pos1;
    if(!pos1.InitMembers(-2,4))
    printf("초기화 실패\n");
    if(!pos1.InitMembers(2,4))
    printf("초기화 실패\n");

    Point pos2;
    if(!pos2.InitMembers(5,9))
    printf("초기화 실패\n");

    Rectangle rec;
    if(!rec.InitMembers(pos2,pos1))
    printf("직사각형 초기화 실패\n");

    if(!rec.InitMembers(pos1,pos2))
    printf("직사각형 초기화 실패\n");
    
    rec.ShowRecInfo();
    return 0;
}