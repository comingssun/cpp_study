#include<stdio.h>

int main(void)
{
    const int num=12;
    const int *ptr=&num;
    const int *(&pointer)=ptr;
    printf("pointer : %d, num : %d, ptr : %d\n",*pointer,num,*ptr);
    return 0;
}