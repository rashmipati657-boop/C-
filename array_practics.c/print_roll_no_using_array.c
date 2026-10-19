#include<stdio.h>
int main(){
    int marks[10];

    for(int i=0;i<=9;i++){
        printf("Enter your marks No : ");
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<=9;i++){
        printf("%d ",marks[i]);
    }

    for(int i=0;i<=9;i++){
        if(marks[i]<35){
            printf("\nRoll no. %d failed with marks %d\n",i,marks[i]);
            
        }
    }
     
    for(int i=0;i<=9;i++){
        if(marks[i]<35){
            printf("%d ",i);
        }
    }
    return 0;

}