# include <stdio.h>

int four(int num1,char ch, int num2);

int main(){
	int num1,num2;
	char ch;
	
	scanf("%d %c %d",&num1,&ch,&num2);
	
	printf("%d %c %d = %d",num1,ch,num2,four(num1,ch,num2));
}

int four(int num1,char ch, int num2)
{
	if(ch == '+')
		return num1+num2;
	else if(ch == '-')
		return num1-num2;
	else if(ch == '*')
		return num1*num2;
	else if(ch == '/')
		return num1/num2;
	else
		return 0;
}
