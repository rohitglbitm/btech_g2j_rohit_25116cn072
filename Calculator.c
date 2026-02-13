#include <stdio.h>

int main() {
    
    int a, b;
    char symbol;
    
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("Enter an operator:");
    scanf(" %c", &symbol);
    
    switch(symbol)
    {
    case '+':
        printf("Result:%d", a+b);
        break;
    case '-':
        printf("Result:%d", a-b);
        break;
    case '*':
        printf("Result:%d", a*b);
        break;
    case '/':
        if(b!=0)
        {
            printf("Result:%d", a/b);
        }
        else
        {
            printf("Cannot divide by zero.");
        }
        break;
    default:
        printf("Operator you entered is invalid");
    }
    

    return 0;
}