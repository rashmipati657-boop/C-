#include<stdio.h>
int main(){

    typedef int anka;
typedef struct pokemon{
    float speed ;
    char name;
    anka attack;
    anka hp;
}pokemon;

 pokemon arr[10];
 arr[0].speed = 60;
 arr[0].attack = 40;
 arr[0].hp = 100;
 arr[0].name= 'p';

 printf("The speed of the pokemon is %d",arr[0].speed);
 printf(" , Also it has %d number of attacks",arr[0].attack);
 printf(" Apart from these it has also high healing power so it's hp is %d\n",arr[0].hp);
 printf(" .Andfinal the name of the pokemon is %d\n",arr[0].name);



    return 0;

}