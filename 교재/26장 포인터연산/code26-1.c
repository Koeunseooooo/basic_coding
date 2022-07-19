#include <stdio.h>
#include <string.h>

int main(){
    int i, num, iary[4]={1,2,0,0};
    char cary[20], *sp;
    int *ip = iary;
    printf("정수 1개와 문자열 1개 입력 : ");
    scanf("%d%s",&num,cary);

    for(i=0;i<2;i++){
        *(ip+2+i) = *(ip+i)+num;
        printf("%d %d\n",*(ip+i),*(ip+2+i));
    }

    sp=strchr(cary,'p');
    if(sp !=NULL)
        printf("알파벳 'p'가 %d번째 자리에 있음.\n",sp-cary+1);
    else
        printf("알파벳 'p'가 %s에 없음 \n",cary);

}