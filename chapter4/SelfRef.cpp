#include<stdio.h>

class SelfRef
{
    private:
    int num;
    public:
    SelfRef(int n):num(n)
    {
        printf("객체 생성\n");
    }
    SelfRef& Adder(int n)
    {
        num+=n;
        return *this;
    }
    SelfRef& ShowTwoNumber()
    {
        printf("%d\n",num);
        return *this;
    }
};

int main(void)
{
    SelfRef obj(3);
    SelfRef &ref=obj.Adder(2);

    obj.ShowTwoNumber();
    ref.ShowTwoNumber();

    ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
    return 0;
}