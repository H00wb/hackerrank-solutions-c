#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int firstNumber = 0, secondNumber = 0;
    float thirdNumber = 0.0f, fourthNumber = 0.0f;

    scanf("%d %d",&firstNumber,&secondNumber);
    scanf("%f %f",&thirdNumber,&fourthNumber);
  
    int sumFirstLine = firstNumber + secondNumber, subtractionFirstLine = firstNumber - secondNumber;
    float sumSecondLine = thirdNumber + fourthNumber, subtractionSecondLine = thirdNumber - fourthNumber;

    printf("%d %d\n", sumFirstLine,subtractionFirstLine);
    printf("%.1f %.1f",sumSecondLine,subtractionSecondLine);
    
    
    return 0;
}
