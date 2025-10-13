#include <stdio.h>

#define LEN 10

void inc(int* ptr)
{
    ++(*ptr);
}

int* local_address()
{
    int num;

    return &num;

}
int array_sum(int *arr, const int len)
{
     int sum = 0;
     
    for(int i = 0; i < len; i++){
        sum += *arr++;
    } 

    

    return sum;
}

int* array_max_ptr(int* arr, const int len){
    int* veryBIG;
    int big;
    for(int i = 0; i < len; ++i){
        if(i[arr] > big){
            veryBIG = i[arr];
        }
    }
    return veryBIG;
}

int main()
{
    int num = 41;
    int* num_ptr = &num;
    int** n_ppter = &num_ptr;
    *num_ptr = 42;
    inc(*n_ppter);

    int arr[LEN] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < LEN; ++i){
        printf("%d\n", i[arr]);
    }

    const int sum = array_sum(arr, LEN);

    printf("%d\n", num);
    printf("%d\n", sum);

    printf("%d\n", array_max_ptr(arr, LEN));
    return 0;
}