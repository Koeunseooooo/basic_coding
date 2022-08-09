#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <stdlib.h> // rand 함수를 위한 헤더 파일 
#include <time.h> // time 함수를 위한 헤더 파일 

int main() 
{ 
  int computerBall[3]; // 컴퓨터의 볼을 저장할 int형 배열 
  int i, j; // 반복을 위한 변수     
  int temp; // 난수 중복 체크를 위한 변수 
  int userBall[3]; // 사용자의 볼을 저장할 int형 배열 

  int count = 1; // 회차를 확인할 변수 9회까지 가능 

  int strike; // 스트라이크의 수를 세기 위한 변수 

  int ball; // 볼의 수를 세기 위한 변수 

  // 난수 생성 및 중복 체크 

  srand((unsigned)time(NULL)); 

  for (i = 0; i < 3; i++) 

  { 

      temp = (rand() % 9) + 1; // temp변수에 현재 랜덤 값을 저장 
      computerBall[i] = temp; // temp값을 컴퓨터의 볼에 저장 
      for (j = 0; j < i; j++) // 현재 추가된 만큼 반복하며 
          if (temp == computerBall[j] && i != j) // 만약 현재 temp값과 이전에 넣은 값 중 동일한 게 있다면 
              i--; // i의 값을 줄여 다시 이전으로 돌아가도록 
  } 

  while (1) // 숫자야구 게임 시작 
  { 
    printf("[%d회차 숫자야구]\n", count); 

    while(1) // 정상적인 숫자만 입력받기 위한 반복 

    { 

    printf("1부터 9까지의 숫자를 입력하세요 : "); 

    scanf("%d %d %d", &userBall[0], &userBall[1], &userBall[2]); 

    if(userBall[0] < 1 || userBall[0] > 9 || userBall[1] < 1 || userBall[1] > 9 || userBall[2] < 1 || userBall[2] > 9) 

    { // 입력한 숫자가 1 ~ 9 숫자가 아니면 다시 입력받도록 

    printf("범위 외의 숫자를 입력하시면 안됩니다.\n"); 

    continue; 

    } 

    else if(userBall[0] == userBall[1] || userBall[0] == userBall[2] || userBall[1] == userBall[2]) 

    { // 입력한 숫자 중에 중복된 게 있으면 다시 입력받도록 

    printf("중복된 숫자를 입력하시면 안됩니다.\n"); 

    continue; 

    } 

    break; // 아무 문제 없을 경우 반복 종료 

    } 

    ball = 0; 

    strike = 0; 

    for (i = 0; i < 3; i++) // computerBall 1~3번째에 따라 각 userBall 1~3번째를 확인하기 위한 반복 

        for (j = 0; j < 3; j++) 

            if (computerBall[i] == userBall[j]) // computerBall과 userBall의 값이 같다면 

                if (i == j) // 같은 위치일 경우 

                    strike++; // 스트라이크 개수 증가 

                else // 다른 위치일 경우 

                    ball++; // 볼 개수 증가 

// 확인한 결과를 출력 

      printf("[결과]스트라이크 : %d, 볼 : %d\n\n", strike, ball); 

if(strike == 3) // 만약 스트라이크 개수가 3개이면 승리 

{ 

printf("***** 승리했습니다. *****\n\n"); 

break; 

} 

else if(count == 9) // 만약 9회차인데도 승리하지 못하면 패배 

{ 

printf("***** 패배했습니다.. 정답 : %d %d %d *****\n\n", computerBall[0], computerBall[1], computerBall[2]); 

break; 

} 

      count++; 

  } 

return 0; 

} 

