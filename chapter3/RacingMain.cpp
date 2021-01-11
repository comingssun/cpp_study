#include "Car.h"
#include "Car.cpp"
int main()
{
    Car run99;
    run99.InitMembers("run99", 100);
    //run99.curSpeed == 100; // private으로 선언 되어 있기 때문에 클래스 외부에서 접근이 불가
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    return 0;
}