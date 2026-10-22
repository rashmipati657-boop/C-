#include<stdio.h>
int main(){
 
    int m,n;
    printf("Enter your no. of rows :");
    scanf("%d",&m);
    printf("Enter your no. of columns :");
    scanf("%d",&n);

    int arr1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter your elements :");
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Another matrix is :\n");
    printf("\n");
    
    int p,q;
    printf("Enter your no. of rows :");
    scanf("%d",&p);
    printf("Enter your no. of columns :");
    scanf("%d",&q);

    int arr2[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<n;j++){
            printf("Enter your elements :");
            scanf("%d",&arr2);
        }
        printf("\n");
    }
    
    printf("the second matrix is :\n");

    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("%d\t",arr2[p][q]);
        }
        printf("\n");
    }
     printf("\n");
     printf("\n");

     printf("The multiplication of the matrix is :\n");
    if(m==q){
     for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d\t",arr1[i][j] * arr2[p][q]);
        }
        printf("\n");
     }
    //    printf("\n");
    }
      printf("\n");
    // if else{
    //     printf("Multiplication not possible.\n");
    // }


 return 0;
}