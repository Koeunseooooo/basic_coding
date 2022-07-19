#include <stdio.h>

int main(){
    int i;
    double d;
    char c;

    int *iPointer =&i;
    double *dPointer = &d;
    char *cPointer = &c;

    printf("%p\n",iPointer);
    printf("%p\n\n",&i);
    printf("%p\n",dPointer);
    printf("%p\n\n",&d);
    printf("%p\n",cPointer);
    printf("%p\n\n",&c);
}