#include <stdio.h>

int adder(int n1, int n2){
    printf("Adder was called: ");
    return n1 + n2;
}

int divider(int n1, int n2){
    printf("Divider was called: ");
    return n1 / n2;
}

//Function that takes a function pointer as parameter
void printresult(int n1, int n2, int (*fptr)(int, int)){
    printf("%d\n", fptr(n1, n2));
}

int main(void){
    int num1 = 10;
    int num2 = 5;

    //pass different functions to the same function
    printresult(num1, num2, adder); //calls adder(10, 5)
    printresult(num1, num2, divider); //calls divder(10, 5)
    printf("\n");

    return 0;
}