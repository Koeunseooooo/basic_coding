#include <stdio.h>

int main(){
    int a[5]={0,};
    for (int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    for (int i=0;i<5;i++){
        printf("%d",a[i]);
    }
}