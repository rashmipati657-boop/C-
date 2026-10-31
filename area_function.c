#include<stdio.h>
 //Function prototype/parameter
    int circle(int r );
    int square(int a);
int main(){
    // variable declaratio
  int r,a;
  printf("Enter your Radius :");
  scanf("%d",&r);
  printf("Entre your side of square :");
  scanf("%d",&a);

  square(a);
  circle(r); //FUNCTION CAALING
  return 0;
}

  //function argument operation
  int circle(  int x){
    float pi = 3.14;
    float area = pi*x*x;
    printf("The area of the circle is %f",area);
  }

  int square(int a){
    int area = a*a;
    printf("The area of the square is %d\n",area);
  }



