#include <stdio.h>

class TwoNumber{
    private:
    int num1;
    int num2;
    public:
    TwoNumber(int num1,int num2)
    {
        this->num1=num1;
        this->num2=num2;
    }
    // TwoNumber(int num1,int num2):num1(num1),num2(num2)
    // {
    //     //member initializer로도 사용 가능
    // }
    void ShowTwoNumber()
    {
        printf("%d\n",this->num1);
        printf("%d\n",this->num2);
    }
};

int main(void)
{
    TwoNumber two(2,4);
    two.ShowTwoNumber();
    return 0;
}