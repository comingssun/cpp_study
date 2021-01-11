#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "Point.h"
#include "Point.cpp"
class Rectangle{
    private:
    Point upleft;
    Point lowright;

    public:
    bool InitMembers(const Point &ul, const Point &lr);
    void ShowRecInfo() const;
};
#endif