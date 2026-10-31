#include<stdio.h>
#include<string.h>
int main(){

    typedef int anka;
typedef struct pokemon{
    float speed ;
    char tier;
    anka attack;
    anka hp;
    char name[20];
}pokemon;

 pokemon arr[3];
 arr[0].speed = 60;
 arr[0].attack = 40;
 arr[0].hp = 100;
 arr[0].tier= 'p';
 strcpy(arr[0].name,"Pikachu");

//  printf(" The name of the pokemon is :%d\n",arr[0].speed);
//  printf(" The no. of attacks of pokemon is :%d\n",arr[0].attack);
//  printf("The healing power of pokemon is :%d\n",arr[0].hp);
//  printf("The name of the pokemon is :%s\n",arr[0].name);
//  printf("The tier of the pokemon is :%c\n",arr[0].tier);

 for(int i=0;i<3;i++){
 printf(" The name of the pokemon is :%d\n",arr[i].speed);
 printf(" The no. of attacks of pokemon is :%d\n",arr[i].attack);
 printf("The healing power of pokemon is :%d\n",arr[i].hp);
 printf("The name of the pokemon is :%s\n",arr[i].name);
 printf("The tier of the pokemon is :%c\n",arr[i].tier);

 printf("\n");


 }

 
    return 0;

}