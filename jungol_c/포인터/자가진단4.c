// 문제 : 5개짜리 정수형 배열을 선언하고 포인터 변수에 저장한 후 포인터 변수를 이용하여 입력을 받은 후 홀수번째 입력값을 출력하는 프로그램을 작성하시오.
// 여기부터는 25강 나간다음에 해야겠담 

# include <stdio.h>

int main()
{
	int arr[5];
	int i;
	int *p = arr;
	
	for(i = 0; i<5; i++)
	{
		scanf("%d ",&p[i]);
	}
	
	for(i = 0; i<5; i+=2)
	{
		printf("%d ",p[i]);
	}
	
	return 0;
}