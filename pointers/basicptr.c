#include<stdio.h>
int main(){
    int a=5;
    int* x=&a;
    printf("%p ",x); //*x stores value of variable a 
    return 0;
}