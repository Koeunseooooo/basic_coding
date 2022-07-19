#include "stdio.h"
#include "math.h"

void cal(float *c,int j)
{

	float t;
	int i,k; 
	int a,b,d;

 for (i = 0; i < j; i++) {
   for (k = i; k < j; k++) {
      if(c[i]<c[k]){
          t=c[i];
          c[i]=c[k];
          c[k]=t;
      }
    }
  }
  
  if(c[0]<0) a=(int)c[0]; else a=(int)c[0]+1;
  if(c[2]<0) b=(int)(c[2]-1); else b=(int)c[2];
  if(c[1]<0) d=(int)(c[1]-0.5);else d=(int)(c[1]+0.5);
	printf("%d %d %d", a, b, d);
}

int main(void)
{
	float c[3]={0,};
	float i=0,j=0,k=0,h=0,t=0,u=0;
	float a,b;
	char ch=0;
	
	scanf("%f %f %f", &c[0],&c[1],&c[2]);
	
	cal(c,3);

	return 0;
}

// ceil() 함수는 소수점 자리의 숫자를 무조건 올리는 함수이다.
// floor() 함수는 뜻 그대로 바닥으로 만든다.소수점 아래를 무조건 무시
// round() 함수가 우리가 보통 알고 있는 반올림함수다.
