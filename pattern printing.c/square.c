#include<stdio.h>
int main() {
    int x,y,temp;
    printf("Enter your no. : ");
    scanf("%d",&x); 
    printf("Enter another no. : ");
    scanf("%d",&y);
    temp=x;
    x=y;
    y=temp;
    printf("After swapping the no. is %d and %d",x,y);
    
    return 0;
}