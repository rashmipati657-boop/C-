#include<stdio.h>
// function prototype
void swap(int *x , int *y);
int main(){

    // variable declaration
    int x,y;
    printf("Enter your no1. :");
    scanf("%d",&x);
    printf("Enter your no2 :");
    scanf("%d",&y);
    swap(&x,&y);
      printf("\nno1 is %d\n no2 is %d\n",x,y);
}

    void swap(int *a, int *b){
        int  temp;
       temp = *a;
       *a = *b;
       *b = temp;
      
        printf("\nx = %d\n y = %d",*a,*b);
    

    }
