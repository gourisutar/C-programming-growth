#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
     if(n<0){      //if n is negative
        n=n*(-1);  //make above number positive
     }
     printf("the absolute value is:%d",n);
     return 0;
    
}