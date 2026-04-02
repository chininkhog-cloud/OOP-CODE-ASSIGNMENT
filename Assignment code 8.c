#include <stdio.h>

void func1(void){
    printf("func1 was called!\n");
}

void func2(void){
    printf("func2 was called!\n");
}

//Function that returns a function pointer
void (*whatfunction(int sel))(void){
    if(sel == 1)
    return func1;
    else if(sel ==2)
    return func2;
}


int main(void){
        void (*fptr)(void); //Declare function pointer

        fptr = whatfunction(1); //Get pointer to func1
        fptr(); //Calls func1

        fptr = whatfunction(2); //Get pointer to func2
        fptr(); //Call func2

        printf("\n");

        return 0;
    }

    
