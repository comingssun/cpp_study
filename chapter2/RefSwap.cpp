#include<stdio.h>

void SwapByRef(int &ref1, int &ref2)
{
    int temp=ref1;
    ref1=ref2;
    ref2=temp;
}
/*void SwapByRef(int *ptr1, int *ptr2)
{
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
이 때는 SwapByRef(&val1,&val2)로 넘겨주어야 함.

*/

int main(void)
{
    int val1=10;
    int val2=20;

    SwapByRef(val1, val2);
    printf("%d\n",val1);
    printf("%d\n",val2);
}