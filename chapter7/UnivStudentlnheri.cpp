#include <stdio.h>
#include <cstring>
class Person                        //기초(부모)클래스
{
    private:
    int age;
    char name[50];
    public:
    Person(int myage,const char *myname):age(myage)
    {
        strcpy(name,myname);
    }
    void WhatYourName() const{
        printf("My name is %s\n",name);
    }
    void HowOldAreYou() const
    {
        printf("I'm %d years old\n",age);
    }
};

class UnivStudent : public Person   //유도(자식)클래스로 Person클래스를 상속받음.
{
    private:
    char major[50];
    public:
    UnivStudent(const char *myname,int myage,const char *mymajor):Person(myage,myname)
    {//이니셜라이저를 통해 생성자를 호출하여 인자로 myage와 myname에 저장된 값을 전달함.
        strcpy(major,mymajor);
    }
    void WhoAreYou() const{
        WhatYourName();//기초 클래스에서 상속은 되지만, Person 멤버 변수에 대한 접근은 public에 쓰인 함수로 간접적으로 가능. -> 은닉성을 갖춤.
        HowOldAreYou();
        printf("My major is %s.\n\n",major);
    }
};

int main(void)
{
    UnivStudent ustd1("Park",27,"Control eng.");
    ustd1.WhoAreYou();

    UnivStudent ustd2("Lee",30,"Computer eng.");
    ustd2.WhoAreYou();

    return 0;
}