#include <stdio.h>

class Point; //Point 클래스 이름 미리 선언

class PointOP
{
private:
int opcnt;
public:
    PointOP():opcnt(0)
    {
    }

    Point PointAdd(const Point&,const Point&);
    Point PointSub(const Point&,const Point&);
    ~PointOP()
    {
        printf("Operation times : %d\n",opcnt);
    }
};

class Point{
    private:
    int x;
    int y;
    public:
    Point(const int &xpos,const int &ypos):x(xpos),y(ypos)
    {}
    friend Point PointOP::PointAdd(const Point&, const Point&);     //friend 선언!! PointOP의 함수에 x,y접근 가능하게 해줌.
    friend Point PointOP::PointSub(const Point&, const Point&);
    friend void ShowPointPos(const Point&);                         //일반 함수에 대해 friend 선언으로 x,y 접근 가능하게 해줌.
};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2)
{
    opcnt++;
    return Point(pnt1.x+pnt2.x,pnt1.y+pnt2.y);                      //Point 클래스의 private변수인 x,y에 접근
}

Point PointOP::PointSub(const Point& pnt1,const Point& pnt2)
{
    opcnt++;
    return Point(pnt1.x-pnt2.x,pnt1.y-pnt2.y);                      //Point 클래스의 private변수인 x,y에 접근
}

int main(void)
{
    Point pos1(1,2);
    Point pos2(2,4);
    PointOP op;

    ShowPointPos(op.PointAdd(pos1,pos2));
    ShowPointPos(op.PointSub(pos2,pos1));
    return 0;
}

void ShowPointPos(const Point& pos)
{                                                                     //Point 클래스의 private변수인 x,y에 접근
    printf("x: %d, ",pos.x);
    printf("y: %d\n",pos.y);
}