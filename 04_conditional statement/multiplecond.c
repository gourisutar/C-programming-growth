#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("it a three digit number");
    }
else{
   printf("it a not three digit number"); 
}
return 0;

}