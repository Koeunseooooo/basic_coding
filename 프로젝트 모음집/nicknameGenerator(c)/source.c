#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define MAX_KLEN 20 //키워드 최대 길이
#define MAX_NLEN 30 //닉네임 최대 길이

void run(); //실행
int selectMenu();//첫 화면
void printMenual(); // 1.설명글
void listNickname(); // 2. 닉네임 목록
void createNickname(); // 3.닉네임 생성
FILE* selectFirstFile(int i); // 첫번째 파일 선택
FILE* selectSecondFile(int i); // 두번째 파일 선택
void* selectRandomWords(FILE*fp); // 선택된 파일에 대하여 랜덤 키워드 5개 추출
char* selectKeyword(int i, FILE *fp); // 랜덤 키워드 5개 중 사용자 선택
void saveFile(char nickname[]); // 파일에 생성한 닉네임 저장
void readFile(); // 닉네임리스트 출력

int main()
{
    run(); // 메인 함수에서는 run 함수만 실행
    return 0;
};


void run()
{
    int key=0;
    while((key=selectMenu())!=0){
        switch(key) {
            case 1: 
                printMenual(); 
                break; 
            case 2: 
                listNickname(); 
                break; 
            case 3: 
                createNickname();  
                break; 
            default: 
                printf("1-3 사이의 숫자를 입력해주세요.\n"); break;
        };
    };
    printf("프로그램 종료\n");
    
};

int selectMenu()
{
    int i;
    printf("=================== 닉네임 생성기 =================== (0:종료)");
    printf("\n\n");
    printf("    1: 사용 설명서\n");
    printf("    2: 닉네임 목록\n");
    printf("    3: 닉네임 생성하기\n");
    scanf("%d",&i);
    return i;
};

void printMenual(){
    printf("이 개인 맞춤형 닉네임 생성기는 어느 사이트, 어플리케이션을 가도 회원가입 문자가 나오는데 그 닉네임을 결정한 시간을 줄여주는 생성기 입니다.\n ");
    printf("확률을 통해 내가 이 단어를 얼마나 많이 선택했는지 알려주고 닉네임 목록을 통해 사용자가 전에 선택한 단어들의 조합은 어떻게 되었는지를 알려주게 됩니다.");
};

void listNickname(){
    // 1000으로 부족한데..?
    char buffer[1000] = { 0, };
    FILE* fp = fopen("최종.txt","r"); // 최종 파일을 a(붙여쓰기) 모드로 열기
    fread(buffer, 1, 1000, fp); //전체 읽기
    printf("%s", buffer);
    // 어떻게 해야 마지막 단어가 안씹힐까?
    fclose(fp); //파일 포인터 닫기
};



void createNickname(){
    const char * nickname;
    FILE *fp;
    FILE *fp2;

    char buffer[100];
    // strcat(strcpy(buffer, str1), str2);
    int j,i;

    // 첫번째 단계 : 감정 키워드 추출
    printf("=====================================================\n");
    printf("첫 번째 키워드으로 사용될 [감정_유형]을 선택하십시오.\n\n");
    printf("    1: 감정_슬픔\n    2: 감정_행복\n    3: 감정_화남\n");
    scanf("%d", &j);
    fp=selectFirstFile(j); 
    const char *_first_keyword = selectKeyword(j,fp);
    printf("%s",_first_keyword); // 확인 o
    strcpy(buffer, _first_keyword);

    // 두번째 단계 : 사물/인물/지명 키워드 추출
    printf("=====================================================\n");
    printf("두 번째 키워드으로 사용될 [단어_유형]을 선택하십시오.\n\n");
    printf("    1: 사물\n    2: 인물\n    3: 지명\n");
    scanf("%d", &i);
    fp2=selectSecondFile(i); 
    const char *_second_keyword = selectKeyword(i,fp2);
    strcat(buffer, _second_keyword);
    printf("%s",buffer); // 확인 o


    // 줄바꿈 없애기
    for(int i=0;buffer[i]!=0;i++){
        if(buffer[i]=='\n'){
            buffer[i]=' ';
            break;
        }
    }
    printf("%s",buffer);
    saveFile(buffer);

    // 최종 파일에 저장하기
    
}

void saveFile(char nickname[100]){
    FILE* fp = fopen("최종.txt","a"); // 최종 파일을 a(붙여쓰기) 모드로 열기
    fputs(nickname,fp); //문자열 입력
    // fputs("end", fp);
    fclose(fp); //파일 포인터 닫기

}

void printNicknameListFile(){
    FILE* fp = fopen("최종.txt", "r");  //test파일을 r(읽기) 모드로 열기
    char buffer[100] = { 0, };

    fread(buffer, 1, 100, fp); //전체 읽기
    printf("%s", buffer);

    fclose(fp); //파일 포인터 닫기
}


char* selectKeyword(int j,FILE *fp){
    
    char (*p)[MAX_KLEN]=(char(*)[MAX_KLEN])selectRandomWords(fp); //랜덤추출 함수 실행을통해 키워드 5개 반환

    int key;
    printf("=====================================================\n");
    printf("아래의 추출된 랜덤 키워드 다섯 개 중 하나를 선택해주세요.\n\n");
    printf("    1.%s    2.%s    3.%s    4.%s    5.%s",*p,*(p+1),*(p+2),*(p+3),*(p+4));
    scanf("%d", &key);// 사용자로부터 감정 키워드 번호 선택
    while(key<1||key>5){
        printf("1-5 사이의 숫자를 입력해주세요.");
        scanf("%d", &key);
    }
    return (p+(key-1));
}

FILE* selectFirstFile(int j){
    FILE* fp;
    // switch문을 통해 텍스트 이름 가져와서 파일 open
    switch(j){
        case 1: // 슬픔 파일 출력
        fp = fopen("감정_슬픔.txt","r");

        case 2: // 행복 파일 출력
        fp = fopen("감정_행복.txt", "r");

        case 3: // 화남 파일 출력
        fp = fopen("감정_화남.txt", "r");
    }
    return fp;
}

FILE* selectSecondFile(int j){
    FILE* fp;
    // switch문을 통해 텍스트 이름 가져와서 파일 open
    switch(j){
        case 1: // 사물 파일 출력
        fp = fopen("사물.txt","r");

        case 2: // 인물 파일 출력
        fp = fopen("인물.txt", "r");

        case 3: // 지명 파일 출력
        fp = fopen("지명.txt", "r");
    }
    return fp;
}

void *selectRandomWords(FILE *fp){
    char str[100];
    int i, acc=0, lines =0, Lbegin[100] = {0};
    while(! feof(fp)){
        if(fgets(str,sizeof(str), fp)!=NULL){
        if(lines>0)
        Lbegin[lines]=acc-lines; 
        acc += strlen(str) +1;
        // printf("%s",str);
        lines++;
    }
    }
    
    int random_index[5];
    srand((unsigned)time(NULL));
    

    // 랜덤 값 생성 - 중복 제거 기능 추가
    for (int i = 0; i < 5; i++) {
		random_index[i]=rand() % lines;
		for (int j = 0; j < i; j++) {
			if (random_index[i] == random_index[j]) i--;
		}
	}

    printf("\n");
    static char choosen_str[5][MAX_KLEN];
    for(int i=0; i<5; i++){
        fseek(fp, Lbegin[random_index[i]],SEEK_SET); // 랜덤 라인으로 fp 위치 이동
        strcpy(choosen_str[i],fgets(str,sizeof(str),fp)); //해당 라인 문자열 읽은 후 복사 
        // printf("%s",choosen_str[i]);
    }
    fclose(fp);

    return choosen_str;

    
}

