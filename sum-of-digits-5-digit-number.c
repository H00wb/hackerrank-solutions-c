#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ndigit(int number)
{
    int sum = 0;
    while(number>0)
    {
       sum+= number%10;
       number/=10; 
    }
    return sum;
}

int main(void) {
    int n = 0;
    scanf("%d", &n);
    int sum = ndigit(n);
    printf("%d",sum);
    return 0;
}
