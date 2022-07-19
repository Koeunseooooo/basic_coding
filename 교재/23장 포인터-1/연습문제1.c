#include <stdio.h>

int main(){
    int a;
    int *p;
    p=&a;
    scanf("%d",&a);
    printf("%p",p);
}