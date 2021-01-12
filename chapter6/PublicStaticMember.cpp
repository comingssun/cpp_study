#include <stdio.h>

class SoSimple
{
    public:
        static int simObjCnt;       //static 변수
        int num1;
        static int num2;
    public:     //안 써도 되지만, 변수와 함수 구분용으로 사용
        SoSimple()
        {
            simObjCnt++;
        }
        static void Adder(int n)    //static 함수 - 객체의 멤버로 존재하지 않음.
        {
            //num1+=n;              //컴파일 에러. static 변수가 아닌 멤버 변수에 접근하려하니 에러.
            num2+=n;                //올바르게 동작. sstatic 함수 내에서는 static 변수와 static 함수만 호출 가능
        }
};
int SoSimple::simObjCnt=0;          //static 변수 초기화
int SoSimple::num2=0;

int main(void)
{
    printf("%d번째 SoSimple 객체\n",SoSimple::simObjCnt);   //객체를 생성하지 않아도 어디서든 접근 가능 0으로 초기화 했으니 0 출력.
    SoSimple sim1;
    printf("%d번째 SoSimple 객체\n",SoSimple::simObjCnt);   //객체를 하나 생성했으니 1 출력.
    SoSimple sim2;

    printf("%d번째 SoSimple 객체\n",SoSimple::simObjCnt);   //객체를 하나 더 생성했으니 2 출력.

    printf("%d번째 SoSimple 객체\n",sim1.simObjCnt);        //생성한 객체가 없으니 그대로 2 출력
                                                           //(객체에서 생성자 안에 있기 때문에 객체 생성할 때만 증가)
                                                           //이런식으로 접근도 가능하지만, 멤버변수 접근하는것과 똑같기 때문에 비추천
    printf("%d번째 SoSimple 객체\n",sim2.simObjCnt);        
    return 0;
}