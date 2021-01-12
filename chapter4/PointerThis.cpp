#include<stdio.h>
#include<cstring>

class SoSimple{
    private:
    int num;
    public:
    SoSimple(int n) : num(n)
    {
        printf("num=%d,",num);
        printf("address= %p\n",this);
    }
    void ShowSimpleData()
    {
        printf("%d\n",num);
    }
    SoSimple * GetThisPointer()
    {
        return this;//객체의 포인터를 반환
    }
};

int main(void)
{
    SoSimple sim1(100);
    SoSimple * ptr1=sim1.GetThisPointer();  //sim1 객체의 주소 값 저장
    printf("%p, ",ptr1);
    ptr1->ShowSimpleData(); //ptr1이 카리키는 객체(==sim1)의 ShowSimpleData함수 호출

    SoSimple sim2(200);
    SoSimple * ptr2=sim2.GetThisPointer();
    printf("%p, ",ptr2);
    ptr2->ShowSimpleData();
    return 0;
}