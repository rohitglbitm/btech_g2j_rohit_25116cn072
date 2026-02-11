#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int sum;
    float avg;
    printf("Enter five integers separated by spaces: \n");
    scanf("%d \n %d \n %d \n %d \n %d", &a, &b, &c, &d, &e);
    sum = a + b + c + d + e;
    avg = sum / 5.0;
    printf("The sum is: %d\n", sum);
    printf("The average is: %.2f\n", avg);
    return 0;
}
