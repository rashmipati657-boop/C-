#include<stdio.h>
// function prototype
float circle(int radius);
int main(){

    //variable declaration
    int radius;
    printf("Enter your radius :");
    scanf("%d",&radius);
    float area = circle(radius); // Argument pass
    printf("Area of the circle is %.2f",area);
}

//function parameter 
float circle(int radius){
    int pi = 3.14;
    float area = pi*radius*radius;
    return area;
    
}