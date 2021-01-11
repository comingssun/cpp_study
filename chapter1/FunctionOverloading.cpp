#include <stdio.h>

void MyFunc(void)
{
    printf("MyfFunc(void) called\n");
}

void MyFunc(char c)
{
    printf("MyfFunc(char c) called\n");
}

void MyFunc(int a, int b)
{
    printf("MyfFunc(int a, int b) called\n");
}

int main()
{
    MyFunc();
    MyFunc('A');
    MyFunc(12, 13);

    return 0;
}