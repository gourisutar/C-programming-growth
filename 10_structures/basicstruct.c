#include<stdio.h>
int main(){
    struct car{
        int hp;
        int speed;
        int engine;
    };
   struct car tata_nexon;
    tata_nexon.hp=98;
    tata_nexon.speed=180;
    tata_nexon.engine=1199;
    printf("HP = %d\n", tata_nexon.hp);
    printf("Speed = %d km/h\n", tata_nexon.speed);
    printf("Engine = %d cc\n", tata_nexon.engine);
    return 0;

}