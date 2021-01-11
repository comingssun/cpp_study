#include<stdio.h>
#include <stdlib.h>
using namespace std;

class Simple
{
    public:
        Simple()
        {
            printf("I'm simple constructor!\n");
        }
};

int main()
{
    printf("case 1: ");
    Simple *sp1 = new Simple;

    printf("case 2: ");
    Simple *sp2 = (Simple *)malloc(sizeof(Simple) * 1);
    printf("end of main\n");
    delete sp1;
    free(sp2);

    return 0;
}