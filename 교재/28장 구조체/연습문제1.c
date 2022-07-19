#include <stdio.h>
#include <string.h>

struct person{
    char name[50];
    int korScore;
    int engScore;
};

int main()
{
    struct person p1,p2;

    printf("이름을 입력하세요 : ");
    scanf("%s",p1.name);
    printf("국어, 영어 점수를 입력하세요 : ");
    scanf("%d %d",&p1.korScore,&p1.engScore);

    printf("이름을 입력하세요 : ");
    scanf("%s",p2.name);
    printf("국어, 영어 점수를 입력하세요 : ");
    scanf("%d %d",&p2.korScore,&p2.engScore);

    printf("%s %d %d\n", p1.name,p1.korScore,p1.engScore);
    printf("%s %d %d\n", p2.name,p2.korScore,p2.engScore);
    printf("국어 평균 : %d",(p1.korScore+p2.korScore)/2);
    printf("영어 평균 : %d",(p1.engScore+p2.engScore)/2);

    return 0;
    
}