#include<stdio.h>

namespace BestComImpl
{
    void SimpleFunc(void)
    {
        printf("BestCom이 정의한 함수\n");
    }
}

namespace ProgComImpl
{
    void SimpleFunc(void)
    {
        printf("ProgCom이 정의한 함수\n");
        
    }
}

int main()
{
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();

    return 0;
}
