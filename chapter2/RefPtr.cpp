#include <stdio.h>

int main()
{
   int num = 12;
   int *ptr = &num;
   int **dptr = &ptr;

   int &ref = num; // num 변수에 reference 선언
   int *(&pref) = ptr; // 포인터 변수에 reference 선언
   int **(&dpref) = dptr; // 이중 포인터 변수에 reference 선언

   printf("%d\n",ref);
   printf("%d\n",*pref);
   printf("%d\n",*ptr);
   printf("%d\n",**dpref);

   return 0;
}
