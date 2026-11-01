#include<stdio.h>

//Function declaration/ function prototype
void addition(int no1,int no2);
void substraction(int no1,int no2);
void multiplication(int no1,int no2);
void division(int no1,int no2);
void modulus(int no1,int no2);

//Process starting path
int main(){

    // variable declaration
    int choice,no1,no2;
    printf("(1).Addition.\n(2).Substraction\n(3).Multiplication\n(4).Division.\n(5).Modulus\n");
    printf("Enter your no1 :");
    scanf("%d",&no1);
    printf("Enter your no2 :");
    scanf("%d",&no2);
    printf("Enter your choice :");
    scanf("%d",&choice);

    switch(choice){
        case 1: 
              addition(no1,no2);
              break;
     case 2: 
              substraction(no1,no2);
              break;
     case 3:                // function argument pass
              multiplication(no1,no2);
              break;
     case 4:                //Actual parameter pass
              division(no1,no2);
              break;
     case 5: 
              modulus(no1,no2);
              break;
     default: printf("Wrong option :--> operation not ava.");
              break;    
    }   
}
    
    //function relative parameter 
    void addition(int x, int y){
        int res;
        res = x + y;
        printf("Your result is :%d",res);

    }
    void substraction(int x, int y){
        int res;
        res = x - y;
        printf("Your result is :%d",res);
    }
    void multiplication(int x, int y){
        int res;
        res = x * y;
        printf("Your result is :%d",res);
    }
    void modulus(int x, int y){
        int res;
        res = x % y;
        printf("Your result is : %d",res);
    }
    void division(int x, int y){
        int res;
        res = x / y;
        printf("Your result is : %d",res);
    }
