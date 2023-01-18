#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int i,j;

    for (i=2;i<=n;i++){
        for(j=2;j<i;j++){
            if (i%j==0){
                break;
            }
        }
        if(i==j){
            printf("%d ",i);
        }
        
    }
}