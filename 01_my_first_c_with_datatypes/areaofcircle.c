#include<stdio.h>
int main(){
float radius;
printf("enter radius:");
scanf("%f",&radius); // taking user input
float pi=3.14;
float area=pi*radius*radius;
printf("the circle of area is: %f", area);
return 0;
}
