#include<stdio.h>
int main(){

   // variable declaration
   int n, fact = 1;
   printf("Enter your no :");
   scanf("%d",&n);
   for(int i=n;i>=1;i--){
         fact = fact*i;
      
         
   }
   printf("%d",fact);
}
