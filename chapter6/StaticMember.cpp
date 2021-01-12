#include <stdio.h>

// int simObjCnt=0;        //전역변수로 설정할 경우 어디서든 접근이 가능하여 문제를 일으킬 수 있다.
// int cmxObjCnt=0;         //객체 안에 static으로 설정 시 객체를 통해 접근이 허용되기 때문에 문제를 방지할 수 있다.

class SoSimple
{
    private:
        static int simObjCnt;           //static 변수이니 SoSimple 객체에 의해 공유 된다. 멤버 변수는 아니다. static 변수일뿐...
    public:
    SoSimple(){
        simObjCnt++;                    //멤버 변수 마냥 접근 가능.
        printf("%d번째 SoSimple 객체\n",simObjCnt);
    }
};
int SoSimple::simObjCnt=0;              //static 변수의 초기화 방법
//생성자에서 초기화 하지 않는 이유는 생성자에서 초기화 할 경우 객체를 생성 될 때마다 0으로 초기화가 되기 때문.

class SoComplex
{
    private:
        static int cmxObjCnt;           //static 변수이니 SoComplex 객체에 의해 공유 된다. 멤버 변수는 아니다. static 변수일뿐...
    public:
    SoComplex(){
        cmxObjCnt++;                    //멤버 변수 마냥 접근 가능.
        printf("%d번째 SoComplex 객체\n",cmxObjCnt);
    }
    SoComplex(SoComplex &copy)
    {
        cmxObjCnt++;                    //멤버 변수 마냥 접근 가능.
         printf("%d번째 SoComplex 객체!!\n",cmxObjCnt);
    }
};
int SoComplex::cmxObjCnt=0;              //static 변수의 초기화 방법
//생성자에서 초기화 하지 않는 이유는 생성자에서 초기화 할 경우 객체를 생성 될 때마다 0으로 초기화가 되기 때문.

int main(void)
{
    SoSimple sim1;
    SoSimple sim2;

    SoComplex com1;
    SoComplex com2=com1;
    SoComplex();
    return 0;
}