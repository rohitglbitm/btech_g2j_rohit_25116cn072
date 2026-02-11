#include <stdio.h>

int main() {
    int a, b;
        printf("Enter first integers: \n");
        scanf("%d", &a);
        printf("Enter second integers: \n");
        scanf("%d", &b);
   
    if(a==b)
    {
        printf("Both numbers are same and equal.");
    }
    else
    {
        printf("Both numbers are not same.");
    }
    return 0;
}