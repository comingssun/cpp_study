#include<stdio.h>
int Adder(int num1=1,int num2=2);

int Adder(int num1,int num2)
{
    return num1+num2;
}

int main(void)
{
    printf("%d\n",Adder());
    printf("%d\n",Adder(5));
    printf("%d\n",Adder(3,5));
    return 0;
}