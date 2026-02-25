#include <stdio.h>

int main() {
    int a;
    printf("Age:");
    scanf("%d", &a);
    if(a<=12)
    {
        printf("You falls under the category of child.");
    } 
    else if(a>12 && a<=17)
    {
        printf("You falls under the category of teen.");
    }
    else if(a>17 && a<=60)
    {
        printf("You falls under the category of adult.");
    }
    else
    {
        printf("You falls under the category of Sr. Citizen.");
    }
    
    return 0;
}