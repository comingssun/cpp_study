#include<stdio.h>

#define ID_LEN  20
#define MAX_SPD 200
#define FUEL_STEP   2
#define ACC_STEP    10
#define BRK_STEP    10

/*
using namespace std;
namespace CAR_CONST{
    enum{
        ID_LEN=20;
        MAX_SPD=200;
        FUEL_STEP=2;
        ACC_STEP=10;
        BRK_STEP=10;
    };
}//이렇게 선언도 가능. 

사용할 때는 CAR_CONST::ID_LEN 이런 식으로 사용.
*/
struct Car
{
    char gamerID[ID_LEN];
    int fuelGauge;
    int curSpeed;
};

void ShowCarState(const Car &car)
{
    printf("소유자 ID: %s\n",car.gamerID);
    printf("연료랑 : %d %",car.fuelGauge);
    printf("현재 속도 : %d km/s\n",car.curSpeed);
}

void Accel(Car &car)
{
    if(car.fuelGauge <= 0)
        return;
    else
        car.fuelGauge -= FUEL_STEP;

    if(car.curSpeed + ACC_STEP >= MAX_SPD)
    {
        car.curSpeed = MAX_SPD;
        return;
    }

    car.curSpeed += ACC_STEP;
}

void Break(Car &car)
{
    if(car.curSpeed < BRK_STEP)
    {
        car.curSpeed = 0;
        return;
    }
    car.curSpeed -= BRK_STEP;
}

int main()
{
    Car run99 = {"run99", 100, 0};
    Accel(run99);
    Accel(run99);
    ShowCarState(run99);
    Break(run99);
    ShowCarState(run99);

    Car sped77 = {"sped77", 100, 0};
    Accel(sped77);
    Break(sped77);
    ShowCarState(sped77);

    return 0;
}