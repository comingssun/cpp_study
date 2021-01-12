#include <stdio.h>
#include <cstring>

class girl;

class Boy{
    private:
    int height;
    friend class girl; //girl 클래스에 대해 friend 선언
    public:
    Boy(int len) : height(len)
    {
    }
    void ShowYourFriendInfo(girl &frn);
};

class girl{
    private:
    char phNum[20];
    public:
    girl(const char *num)
    {
        strcpy(phNum,num);
    }
    void ShowYourFriendInfo(Boy &frn);
    friend class Boy;
};

void Boy::ShowYourFriendInfo(girl &frn)
{
    printf("Her phone number : %s\n",frn.phNum);
}

void girl::ShowYourFriendInfo(Boy &frn)
{
    printf("His height : %d\n",frn.height);
}

int main(void)
{
    Boy boy(170);
    girl girl("010-1234-5678");
    boy.ShowYourFriendInfo(girl);
    girl.ShowYourFriendInfo(boy);
    return 0;
}