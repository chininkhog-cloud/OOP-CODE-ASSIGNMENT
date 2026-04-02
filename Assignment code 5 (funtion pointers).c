#include <stdio.h>

void funcone(void){
    printf("funcone was called!\n");
}

void functwo(void){
    printf("functwo was called!\n");
}

int main(void){
    //call functions directly
    funcone();
    functwo();

    //printf address of functions (use %p for pointers)
    printf("Address of funcone: %p\n",(void*)funcone);
    printf("Address of functwo: %p\n",(void*)functwo);

    return 0;
}