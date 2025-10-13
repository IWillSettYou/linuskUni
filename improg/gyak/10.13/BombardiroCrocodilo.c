#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

int array_sum(int arr[], const int len)
{
    int sum;
    for(int i = 0;i < len; i++){
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};

    printf("sum of array = %d\n", array_sum(arr, SIZE));

    return 0;
}