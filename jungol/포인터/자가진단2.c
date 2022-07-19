// 정수형 포인터를 이용하여 값을 입력받고 입력받은 값을 10으로 나눈 몫과 나머지를 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main()
{
	int num;
	int *p;
	
	p = &num;
	
	scanf("%d",p);
	
	printf("%d...%d",*p/10,*p%10);
	
	return 0;
}
