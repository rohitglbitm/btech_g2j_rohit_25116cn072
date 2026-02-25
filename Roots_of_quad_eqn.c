#include <stdio.h>
#include <math.h>

int main(){
  float a,b,c,r1,r2,D;
  printf("Standard quadratic equation= Ax^2 + Bx + C = 0\n");
  printf("Enter coefficient of 'x^2='\n",a);
  scanf("%f", &a);
  printf("Enter coefficient of 'x='\n",b);
  scanf("%f", &b);  
  printf("Enter the value of c ='\n",c);
  scanf("%f", &c);
    D = b*b - 4*a*c;
if(D>0){
    r1 = (-b + sqrt(D))/(2*a);
    r2 = (-b - sqrt(D))/(2*a);
    printf("root 1 =%.2f,", r1);
    printf("root 2 = %.2f", r2);
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