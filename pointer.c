#include<stdio.h>
int main(){

    //Variable declaration
    // int no1;

    // int *ptr; 
    // ptr = &no1;
    // *ptr = 0;
    // printf("%d %d",no1,*ptr);
    int x , y,res, *ptr , *ptr1;
    ptr = &x;
    ptr1 = &y;
    printf("Enter your no. :");
    scanf("%d",&x);
    printf("Enter your no. :");
    scanf("%d",&y);
    
    res = *ptr + *ptr1;
    printf("Your result is :%d",res);

 


}