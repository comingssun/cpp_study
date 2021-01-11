#include<stdio.h>

int main()
{
    int i;
    int num, sum = 0;

    for(i = 0; i < 5; i++)
    {
        printf("%d번 째 정수 입력 :",i+1);
        scanf("%d",&num);
        sum += num;
    }

    printf("합계: %d",sum);

    return 0;
}

