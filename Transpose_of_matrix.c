#include<stdio.h>
int main(){

    int m,n;
    printf("Enter the number of rows :");
    scanf("%d",&m);
    printf("Enter the number of columns :");        
    scanf("%d",&n);
    int arr1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter your Numbers :");
            scanf("%d\t",&arr1[i][j]);
        }

    }
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }

    printf("The transpose of the matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",arr1[j][i]);
        }
        printf("\n");
    }
    return 0;

}