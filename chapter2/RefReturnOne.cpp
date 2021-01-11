#include<stdio.h>

int& RefRetFuncOne(int &ref)
{
    ref++;
    return ref;
}

int main(void)
{
    int num1=1;
    int &num2=RefRetFuncOne(num1);// 이 경우 참조자를 사용하여 num1과 num2가 같은 변수이다.
    // int num2=RefRetFuncOne(num1);//이 경우 참조자를 사용 안 해서 별개의 변수가 된다.
    num1++;
    num2+=100;
    printf("%d\n",num1);
    printf("%d\n",num2);
    return 0;
}