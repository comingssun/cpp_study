#include<stdio.h>

class Temporary
{
    private:
    int num;
    public:
    Temporary(int n):num(n)
    {
        printf("create obj: %d\n",num);
    }
    ~Temporary()
    {
        printf("destroy obj : %d\n",num);
    }
    void ShowTempInfo()
    {
        printf("My num is %d\n",num);
    }
};

int main(void)
{
    Temporary(100);
    printf("*********after make!\n\n");
    Temporary(200).ShowTempInfo();
    printf("*********after make!\n\n");

    const Temporary &ref=Temporary(300);
    printf("*********end of main!\n\n");
    return 0;
}