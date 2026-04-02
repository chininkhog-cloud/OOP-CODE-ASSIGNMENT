#include <stdio.h> 
int main(void){
    int arr[3]={7,14,21};
    printf("%d\n\n",arr[2]);
    printf("%d\n\n",*(arr+2));
    
    return 0;

}