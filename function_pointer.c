#include<stdio.h>
// function prototype
void swap(int x , int y);
int main(){

    // variable declaration
    int x,y;
    printf("Enter your no1. :");
    scanf("%d",&x);
    printf("Enter your no2 :");
    scanf("%d",&y);
    swap(x,y);
}

    void swap(int a, int b){
        int *p , *q , temp;
        p = &a;
        q = &b;
        temp = *p;
        *p = *q;
        *q = temp;
      
        printf("no1 is %d\n no2 is %d",a,b);
    

    }
