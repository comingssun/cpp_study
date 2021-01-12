#include <stdio.h>

class SoSimple
{
    private:
    int num;
    public:
    SoSimple(int n):num(n)
    {
    }
    SoSimple& AddNum(int n)
    {
        num+=n;
        return *this;
    }
    void Simplefunc()
    {
        printf("SimpleFunc : %d\n",num);
    }
    void Simplefunc() const
    {
        printf("const SimpleFunc : %d!\n",num);
    }
};

void YourFunc(const SoSimple &obj)
{
    obj.Simplefunc();
}

int main(void)
{
    SoSimple obj1(2);
    const SoSimple obj2(7);

    obj1.Simplefunc();
    obj2.Simplefunc();

    YourFunc(obj1);
    YourFunc(obj2);
    return 0;
}