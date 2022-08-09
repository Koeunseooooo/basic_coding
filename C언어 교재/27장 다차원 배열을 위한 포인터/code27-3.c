#include <stdio.h>

void bubble(int data[]){
    int i,j,k,temp;

  
    for (i = 0; i < 10; i++) {
        for (j = 0; j < (10 - 1) - i; j++) {
            if (data[j] < data[j + 1]) {	// 버블 정렬 사용
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
        for(k=0;k<10;k++){
            printf("%d ",data[k]);
        }
        printf("\n");
    }
}

int main(){
    int i,list[10];

    for(i=0;i<10;i++){
        scanf("%d",&list[i]);
    }
    bubble(list);
}