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

    Person()
    //배열 생성시 필요한 생성자
    {
        name=NULL;
        age=0;
        printf("called Person()\n");
    }

    void SetPersonInfo(char * myname, int myage)
    {
        name=myname;
        age=myage;
    }
    void ShowPersonInfo() const{
        printf("이름: %s",name);
        printf(" 나이 : %d\n",age);
    }
    ~Person()
    {
        delete []name;
        printf("called destructor!\n");
    }
};

int main(void){
    Person parr[3];
    char namestr[100];
    char * strptr;
    int age;
    int len;

    for(int i=0;i<3;i++)
    {
        printf("이름 : ");
        scanf("%s",namestr);
        printf("나이 : ");
        scanf("%d",&age);
        len=strlen(namestr)+1;
        strptr=new char[len];
        strcpy(strptr,namestr);
       parr[i].SetPersonInfo(strptr,age);
    }
    parr[0].ShowPersonInfo();
    parr[1].ShowPersonInfo();
    parr[2].ShowPersonInfo();
    return 0;
}