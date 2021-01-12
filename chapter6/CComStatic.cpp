#include <stdio.h>

void Counter()
{
    static int cnt;             //전역변수에 static 선언할 경우, 그 파일내에서만 사용하도록 설정.
    //이와같이 함수 안에서 선언할 경우, 전역변수처럼 취급. 처음엔 0으로 자동으로 초기화.
    cnt++;
    printf("current cnt: %d\n",cnt);
}

int main(void)
{
    for(int i=0;i<10;i++)
    {
        Counter();
    }
    return 0;
}