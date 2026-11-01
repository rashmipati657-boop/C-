#include<stdio.h>
int main(){
    //function prototype

    int factorial(int n);

    // variable declaration

    int n;
    printf("Enter your no. :");
    scanf("%d",&n);
    factorial(n);
    //  printf("Factorial of the no. is %d",fact);
}

//function declaration
int factorial(int n){
    int fact = 1;

    for(int i = 1;i<=n ; i++){
        fact = fact*i;

    }
    printf("Factorial of the no. is %d",fact);
    return  fact;
}