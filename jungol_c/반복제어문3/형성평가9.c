#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char ladder[15][4] = {
        {' ',' ',' ',' ',},
        {' ',' ',' ',' ',},
        {' ',' ',' ',' ',},
        {' ',' ',' ',' ',},
        {' ',' ',' ',' ',},
        {' ',' ',' ',' ',},
        {' ',' ',' ',' ',},
        {' ',' ',' ',' ',},
        {' ',' ',' ',' ',},
        {' ',' ',' ',' ',},
        {' ',' ',' ',' ',},
        {' ',' ',' ',' ',},
        {' ',' ',' ',' ',},
        {' ',' ',' ',' ',},
        {' ',' ',' ',' ',},
    };
    int i,j,n;

    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        int random_arr[4];
        int random;
        for (j=0;j<4;j++){
            random = rand() % ((i*3+2)-i*3+1) +i*3;
            printf("%d ",random);
            random_arr[j]=random;
            
            if(j!=0){
                if(random_arr[j-1]==random_arr[j]) j--;
            }
            ladder[random][j] = '-';
            
        }
        printf("\n");
    }



    // 사다리 프린트
    printf("1 2 3 4 5 \n");

    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("|");
            printf("%c", ladder[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("A B C D E \n");

    
}


