#include <stdio.h>

int main(){
    int i,j,k,l;

    scanf("%d %d",&i,&j);

    if(i>j){
        for (k=1;k<10;k++){
            for (l=i;l>=j;l--){
                printf("%d * %d = %2d   ",l,k,l*k);
                
            }
            printf("\n");
        }
    }

    else{
        for (k=1;k<10;k++){
            for (l=i;l<=j;l++){
                printf("%d * %d = %2d   ",l,k,l*k);
                
            }
            printf("\n");
        }
    }
}