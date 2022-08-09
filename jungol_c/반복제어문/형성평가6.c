// 두 개의 정수를 입력받아 두 정수 사이(두 정수를 포함)에 3의 배수이거나 5의 배수인 수들의 합과 평균을 출력하는 프로그램을 작성하시오.

// (평균은 반올림하여 소수 첫째자리까지 출력한다.)
#include <stdio.h>

int main(){
    int i,num1,num2,sum=0,temp,count=0;
    float avg=0;
    scanf("%d %d",&num1,&num2);

    if (num1>num2){
        temp=num1;
        num1=num2;
        num2=temp;
    }

    for(i = num1; i<=num2; i++)
    {
        if(i%3==0 || i%5 ==0)
        {
            sum+=i;
            count++;	
        }	
    }

    avg = (float)sum/count;
    printf("sum : %d\n",sum);
    printf("avg : %.1f\n",avg);
	return 0;
}