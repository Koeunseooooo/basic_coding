#include <stdio.h>
#include <string.h>

struct person{
    char name[50];
    int score;
};

int main(){
    struct person p1,p2,p3,p4,p5,max;

    printf("이름, 점수를 입력하세요 " );
    scanf("%s %d",p1.name,&p1.score);

    printf("이름, 점수를 입력하세요 " );
    scanf("%s %d",p2.name,&p2.score);

    printf("이름, 점수를 입력하세요 " );
    scanf("%s %d",p3.name,&p3.score);

    printf("이름, 점수를 입력하세요 " );
    scanf("%s %d",p4.name,&p4.score);

    printf("이름, 점수를 입력하세요 " );
    scanf("%s %d",p5.name,&p5.score);

    max=p1;
    if (p2.score>max.score)max=p2;
    if (p3.score>max.score)max=p3;
    if (p4.score>max.score)max=p4;
    if (p5.score>max.score)max=p5;

    printf("최고 점수 : %s %d",max.name,max.score);
}