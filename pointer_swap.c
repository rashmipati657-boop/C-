int main(){

    //variable declaration
    int no1,no2,*a,*b , x;
    printf("Before swapping two  no. are :--\n");
    printf("Enter your no1 :");
    scanf("%d",&no1);
    printf("Enter your no2 :");
    scanf("%d",&no2);
  
    a = &no1;
    b = &no2;
     x = *a;
     *a = *b;
     *b = x;
     printf("After swapping two no. are :\n");
     printf("The no. are %d and %d",no1,no2);
  
}