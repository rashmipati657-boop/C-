#include<stdio.h>
int main(){

    // variable decalration
    // int res;
    // int x = 5;
    // int *ptr = &x;
    // int **pptr = &ptr;

    // res = *ptr + **pptr;
    // printf("%d",res);

    int no1,*x,**y,***z,****a, *****b , res;
     printf("Enter your no1 :");
     scanf("%d",&no1);
    x = &no1;
    y = &x;
    z = &y;
    a = &z;
    b = &a;
    res = *x + **y + ***z + ****a + *****b;
    printf("Your result is: %d",res);

}