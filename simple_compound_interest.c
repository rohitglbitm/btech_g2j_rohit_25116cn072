#include<stdio.h>
#include<math.h>
int main()
{
    float P,R,T,SI,CI;
    printf("enter the principle amount:");
    scanf("%f",&P);
    printf("enter the rate :");
    scanf("%f",&R);
    printf("enter the time period :");
    scanf("%f",&T);
    SI=(P*R*T/100);
    printf("simple interest is=%.2f\n", SI);
    CI=P*(pow((1+R/100),T));
    printf("compound interst is=%.2f:", CI);
    return 0;

}