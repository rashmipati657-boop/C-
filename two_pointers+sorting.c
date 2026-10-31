#include<stdio.h>
int main(){

    //Declaration of variables
    int n;
    printf("Enter your no. :");
    scanf("%d",&n);
    int arr[n];
    int target=8;
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("\nfind\n");
            break;
        }
        else if(arr[i]+arr[j]>target){
            j--;

        }
        else if(arr[i]+arr[j]<target){
            i++;
        }
    };
    
}