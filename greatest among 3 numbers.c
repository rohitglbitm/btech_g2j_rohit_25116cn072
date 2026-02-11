#include <stdio.h>

int main() {
    int a, b, c;
        printf("Enter first integers: \n");
        scanf("%d", &a);
        printf("Enter second integers: \n");
        scanf("%d", &b);
        printf("Enter third integers: \n");
        scanf("%d", &c);
   
    if(a>b && a>c)
    {
         printf("Greatest among all these integer is: %d\n", a);
    }
    else if(b>a && b>c)
    {
         printf("Greatest among all these integer is: %d\n", b);
    }
    else
    {
         printf("Greatest among all these integer is: %d\n", c);
    }
    return 0;
}
