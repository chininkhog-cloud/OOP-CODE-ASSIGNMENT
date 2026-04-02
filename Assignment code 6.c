#include <stdio.h>

int adder(int n1, int n2){
    return n1 + n2;
}

int main(void){
    int (*fptr)(int, int); //Declare function pointer
    fptr = adder;

    //Both calls produce the same result: 30
    printf("Using a name of function: %d\n",adder(10,20));
    printf("Using a function pointer: %d\n",fptr(10,20));
    printf("\n");

    return 0;
}