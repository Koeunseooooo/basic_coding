#include <stdio.h>

struct address{
    char name[10];
    int tel;
    char addr[12];
};

int main(){
    struct address List[3] = {
        {"헐크", 1111111, "서울 동작구"},
        {"아이언맨",2222222,"인천 남동구"},
        {"토르",3333333,"충남 당진"}
    };

    for (int i=0;i<3;i++){
        printf("%9s%8d%12s\n",List[i].name,List[i].tel,List[i].addr);
    }

    return 0;
}