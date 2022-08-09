#include <stdio.h>
#include <string.h>

struct student
{
    char group;
    char name[10];
    double cScore;
    int grade;
};

int main(){

    struct student s1,s2;
    s1.group ='A';
    strcpy(s1.name,"코딩봇");
    s1.cScore = 95.78;
    s1.grade=1;

    printf("소속 : %c\n",s1.group);
    printf("이름 : %s\n",s1.name);
    printf("c언어 점수 : %.2f점\n",s1.cScore);
}


/*
struct student
{
    char group;
    char name[10];
    double cScore;
    int grade;
} s1 = {'A','코딩봇',95.78,1}; 
*/
// 구조체 변수 선언과 동시에 초기화


/*
struct 
{
    char group;
    char name[10];
    double cScore;
    int grade;
} 
*/
// 구조체 이름 자체를 생략하여도 무방하나, 이 경우 해당 구조체를 부를 이름이 없으므로 변수 이름 또한 함께 선언해야 함.

// 배열 vs 구조체
// 배열은 여러 개의 같은 자료형을 하나로 묶은 것
// 구조체는 서로 다른 자료형들을 하나로 묶은 것
