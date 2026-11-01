#include<stdio.h>
void palindrome(int no);
int main(){
    // variable declaration
    int no;

    printf("Enter your no. :");
    scanf("%d",&no);
    palindrome(no);

}
void palindrome(int no){
    int digit,rev=0;
    int temp = no;
    while (no!=0)
{
    /* code */
     digit = no % 10;
    rev = rev * 10 + digit;
    no = no / 10;
    
}
    printf("palindrome sequence is = %d",rev);

    if( rev == temp){
        printf("\n1");
    }
    else{
        printf("\n0");
    }
}