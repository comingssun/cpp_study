#include <stdio.h>
#include <string.h>

char* MakeStrAdr(int len)
{
    char *str = new char[len];

    return str; // 문자열 주소의 첫 주소를 반환 char * type을 반환
}

int main()
{
    char *str = MakeStrAdr(20);
    strcpy(str, "I'm studying C++!");
    printf("%s\n",str);

    delete []str;

    return 0;
}

