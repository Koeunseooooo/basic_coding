#include <stdio.h>
#include <string.h>

struct person{
    int age;
    char name[50];
};

int main()
{
    struct person p1,p2;

    printf("나이를 입력하세요 : ");
    scanf("%d",&p1.age);
    printf("이름은 입력하세요 : ");
    scanf("%s",p1.name);

    p2.age = p1.age+3;
    strcat(strcpy(p2.name,p1.name), "의 형");

    printf("%s의 나이는 %d살입니다. \n%s의 나이는 %d입니다.\n", p1.name,p1.age,p2.name,p2.age);

    return 0;
    
}