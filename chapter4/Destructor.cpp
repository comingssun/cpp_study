#include <stdio.h>
#include <cstring>

class Person{
    private:
    char * name;
    int age;
    public:
    Person(const char * myname,int myage)
    {
    int len=strlen(myname)+1;
    name=new char[len];
    strcpy(name,myname);
    age=myage;    
    }
    void ShowPersonInfo() const{
        printf("이름: %s\n",name);
        printf("나이 : %d\n",age);
    }
    ~Person()
    {
        delete []name;
        printf("called destructor!\n");
    }
};

int main(void){
    Person man1("Park tae yang", 27);
    Person man2("Son heung min", 30);
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    return 0;
}