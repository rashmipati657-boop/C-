#include<stdio.h>
int main() {
    float len,bredth,area,perimeter;
    printf("Enter your length:");
    scanf("%f",&len);
    printf("enter your bredth:");
    scanf("%f",&bredth);
    area=len*bredth;
    printf("\nThe area of the rectangle is %f",area);
    perimeter=2*(len+bredth);
    printf("\nThe perimeter of the rectangle is %f",perimeter);
    if(area>perimeter){
        printf("\nArea is greater than perimeter");
    }
    else if(perimeter>area){
        printf("\nPerimeter is greater than area");
    }
    else{
        printf("\nArea and perimeter are equal");
    }
    return 0;
}