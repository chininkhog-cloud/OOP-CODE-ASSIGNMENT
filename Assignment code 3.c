#include <stdio.h>

int main(void){
    char tmp[5]={1,2,3,4,5};
    char *arr=tmp+4;

    printf("%d\n\n",arr[-2]);

    return 0;
}