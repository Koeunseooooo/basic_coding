// 4강 산술 연산자

// 문제2
/*
#include <stdio.h>

int main(){
    int oneplus=1;
    int result=3;
    printf("3*%d=%d\n",oneplus,3*oneplus);
    printf("3*%d=%d\n",++oneplus,3*oneplus);
    printf("3*%d=%d\n",++oneplus,3*oneplus);
    printf("3*%d=%d\n",++oneplus,3*oneplus);
    printf("3*%d=%d\n",++oneplus,3*oneplus);
    printf("3*%d=%d\n",++oneplus,3*oneplus);
    printf("3*%d=%d\n",++oneplus,3*oneplus);
    printf("3*%d=%d\n",++oneplus,3*oneplus);
    printf("3*%d=%d\n",++oneplus,3*oneplus);
}
*/

// 문제3
/*
#include <stdio.h>

int main(){
    int height=181;
    int result= (height-100)*0.9;
    printf("표준 몸무게는 %d입니다.",result);

}
*/

// 문제4
/*
#include <stdio.h>

int main(){
    int a=10;
    int b=3;
    printf("%d + %d =%d\n",a,b,a+b);
    printf("%d - %d =%d\n",a,b,a-b);
    printf("%d * %d =%d\n",a,b,a*b);
    printf("%d / %d =%d\n",a,b,a/b);
    printf("%d %% %d =%d\n",a,b,a%b);
}
*/

// 한 번에 정수 3개 입력받기
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;

    printf("정수 세 개를 입력하세요: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);

    return 0;
}*/

// 5강 대입연산자

// 예제 
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a=10;
    int b=20;
    a += ++a + b; 
    printf("%d\n",a);
    a += a++ + b;
    printf("%d\n",a);
    return 0;
}*/

// 문제1
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a=5,b=8,c;
    c=a+=b;
    printf("%d",c);
    return 0;
} 답:13
*/ 

// 문제2
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a=7,b=3,c;
    c=a%=b;
    printf("%d",c);
    return 0;
} 답:1
*/

// 문제3
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int five=5;
    printf("5*1=%d\n",five+=5);
    printf("5*2=%d\n",five+=5);
    printf("5*3=%d\n",five+=5);
    printf("5*4=%d\n",five+=5);
    printf("5*5=%d\n",five+=5);
}
*/


// 문제4
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a=100;
    int b=20;
    int c=2019;
    int d=2000;
    printf("%d - %d = %d\n",a,b,a-=b);
    printf("%d - %d = %d\n",c,d,c-=d);
}
*/

