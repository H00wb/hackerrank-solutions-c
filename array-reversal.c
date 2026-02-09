#include <stdio.h>
#include <stdlib.h>

int* reversedArray(int* arr, int numberCount)
{
    int flag, index = numberCount-1;
    for(int i = 0; i < numberCount; ++i)
    {
        if(i == index - i)
        {
            break;
        }
        else if(i > index - i)
        {
            break;
        }
       flag = arr[(index)-i];
       arr[index-i] = arr[i];
       arr[i] = flag; 
    }
    return arr;
}

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    
    reversedArray(arr,num);

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
