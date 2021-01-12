#include<stdio.h>

class SoSimple
{
    private:
    int num1;
    int num2;
    public:
    SoSimple(int n1,int n2):num1(n1),num2(n2)
    {

    }
    SoSimple(SoSimple &copy):num1(copy.num1),num2(copy.num2)
    //복사 생성자 생성.
    {
        printf("Called SoSimple(SoSimple &copy)\n");
    }
    void ShowSimpleData()
    {
        printf("%d\n",num1);
        printf("%d\n",num2);
    }
};

int main(void)
{
    SoSimple sim1(15,30);
    printf("생성 및 초기화 직전\n");
    SoSimple sim2=sim1; //SoSimple Sim2(sim1)으로 변환
    printf("생성 및 초기화 직후\n");
    sim2.ShowSimpleData();
    return 0;
}