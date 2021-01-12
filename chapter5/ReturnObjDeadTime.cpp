#include<stdio.h>

class SoSimple
{
    private:
    int num;
    public:
    SoSimple(int n):num(n)
    {
        printf("New Object: %p\n",this);
    }
    SoSimple(const SoSimple & copy):num(copy.num)
    {
        printf("New Copy Obj : %p\n",this);
    }
    ~SoSimple()
    {
        printf("Destroy obj : %p\n",this);
    }
};

SoSimple SimpleFuncObj(SoSimple ob)
{
    printf("Parm ADR: %p\n",&ob);
    return ob;
}

int main(void)
{
    SoSimple obj(7);
    SimpleFuncObj(obj);

    printf("\n");
    SoSimple tempRef=SimpleFuncObj(obj);
    printf("Return Obj : %p\n",&tempRef);
    return 0;
}