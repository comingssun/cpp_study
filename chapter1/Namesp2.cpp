#include <stdio.h>

namespace BestComImpl
{
    void SimpleFunc();
}

namespace ProgComImpl
{
    void SimpleFunc();
}

int main()
{
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();

    return 0;
}

void BestComImpl::SimpleFunc(void)
{
    printf("BestCom이 정의한 함수\n");
}

void ProgComImpl::SimpleFunc(void)
{
     printf("ProgCom이 정의한 함수\n");
}
