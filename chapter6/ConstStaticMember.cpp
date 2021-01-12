#include<stdio.h>

class CountryArea{
    public:
    const static int RUSSIA = 1707540;              //국가별 면적 크기를 저장해둔 클래스. 보통 const static 상수는 하나의 클래스에 모아둠.
    const static int CANADA = 998467;
    const static int CHINA = 957290;
    const static int SOUTH_KOREA = 9922;
};

int main(void)
{
    //const static 상수에 접근하기 위해 굳이 객체를 생성 하지 않아도 된다. 클래스 이름과 정보를 알 수 있어 이처럼 사용.
    printf("러시아 면적:%d km^2\n",CountryArea::RUSSIA);
    printf("캐나다 면적:%d km^2\n",CountryArea::CANADA);
    printf("중국 면적:%d km^2\n",CountryArea::CHINA);
    printf("한국 면적:%d km^2\n",CountryArea::SOUTH_KOREA);
    return 0;
}