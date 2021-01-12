#include <stdio.h>

class Sosimple{
private:
    int num;

public:
Sosimple(int n):num(n)
    {
    }
Sosimple(const Sosimple& copy) : num(copy.num)
    {
        printf("Called Sosimple(const Sosimple & copy\n");
    }
Sosimple & AddNum(int n)
    {
        num+=n;
        return *this;
    }
void ShowData()
    {   
        printf("num : %d\n",num);
    }
};

Sosimple SimpleFuncObj(Sosimple ob)
{
    printf("Return 이전\n");
    return ob;
}


int main(void)
{
    Sosimple obj(7);
    SimpleFuncObj(obj).AddNum(30).ShowData();
    obj.ShowData();
    return 0;
}