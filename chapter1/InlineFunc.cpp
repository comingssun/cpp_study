#include<stdio.h>

//template 응용
template <typename T>
inline T Squre(T x)
{
    return x*x;
}

int main(void)
{
    printf("%d\n",Squre(5));
    printf("%d\n",Squre(12));
    return 0;
}