#include <stdio.h>
void addnumber(int *ptr){
    int i;
    for(i = 0; i < 10; i++){
        ptr[i] += 100;
    }
}

int main(void){
    int i;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    printf(">> Before function call <<\n");
    for(i = 0; i < 10; i++){
        printf("%4d", arr[i]);
    }
    printf("\n\n");

    addnumber(arr);

    printf(">> After function call <<\n");
    for(i = 0; i < 10; i++){
        printf("%4d", arr[i]);
    }
    printf("\n");

    return 0;
}