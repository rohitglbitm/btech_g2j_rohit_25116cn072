#include <stdio.h>
#include <math.h>

int main(){
  float a,b,c,r1,r2,D;
  printf("Standard quadratic equation: Ax^2 + Bx + C = 0\n");
  printf("Enter the value of A: ",a);
  scanf("%f", &a);
  printf("Enter the value of B: ",b);
  scanf("%f", &b);  
  printf("Enter the value of C: ",c);
  scanf("%f", &c);
    D = b*b - 4*a*c;
if(D>0){
    r1 = (-b + sqrt(D))/(2*a);
    r2 = (-b - sqrt(D))/(2*a);
    printf("First root is %.2f\n", r1);
    printf("Second root is %.2f", r2);
}
else if(D == 0){
    r2 = (-b/(2*a));
   printf("root %.2f", r1);
}
   else{
       printf("roots are imaginary");
}
 return 0;
}
