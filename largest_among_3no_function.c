#include<stdio.h>
void greatest(int no1 , int no2 , int no3);
int main(){

    // variable declatration 
    int no1 , no2 , no3;
    printf("Enter your no1 :");
    scanf("%d",&no1);
    printf("Enter your no2 :");
    scanf("%d",&no2);
    printf("Enter your no3 :");
   scanf("%d",&no3);
    greatest(no1 , no2 , no3);
}

void greatest(int no1, int no2, int no3){
    
    if((no1==no2) && (no2==no3) && (no3==no1)){
        printf("All are same. ");
    }
    
    else if(no1 > no2 && no1 > no3){
        printf("No1 is greatest.");
        }

    else if(no2 > no3 && no2 > no1){
        printf("No2 is greatest.");
            }
    else{
             printf("No3 is greatest.");
        }

            
        }
   
