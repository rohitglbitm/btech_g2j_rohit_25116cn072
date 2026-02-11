#include <stdio.h>

int main() {
    int a;
    
        printf("Year: \n");
        scanf("%d", &a);
       
       int b = a%4==0;
       switch(b)
    {
       case 1:
       printf("Its a Leap Year.");
       break;
       case 0:
       printf("Its not a Leap Year.");
       break;
    }
    return 0;
}