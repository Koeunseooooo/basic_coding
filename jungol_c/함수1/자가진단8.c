#include <stdio.h>

void gugu_print(int a,int b)
{
    int i=0,j=0;
    if(a > b){
        i=a;
        a=b;
        b=i;
    }
    for(j=a;j <= b;j++){
            printf("== %ddan ==\n",j);
        for(i=1;i<=9;i++){
            printf("%d * %d = %2d\n",j,i,j*i);
        }
    printf("\n");
    }
    
}
int main(void)
{
    int i=0,j=0;
    scanf("%d %d",&i,&j);

    gugu_print(i,j);
    return 0;
}