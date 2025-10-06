#include <stdio.h>

#define ar_len = 252

enum{STR_LEN = 42};

int array_sum(const int arr[], const int len){
    int sum = arr[0];
    for(int i = 1; i < len; ++i){
        sum += arr[i];
    }
    return sum;
}

int array_max(const int arr[], const int len){
    int very_big = arr[0];
    for(int i = 1; i < len; ++i){
        if(arr[i] > very_big){
            very_big += arr[i];
        }
    }
    return very_big;
}

int array_second_max(const int arr[], const int len){
    int big = 0;
    int bigger = 0;
    int temp = 0;
    for (int i = 0; i < len; ++i){
        if(arr[i] > bigger){
            temp = bigger;
            bigger = arr[i];
            big = temp;
        }
    }
    return big;
}

int array_avg(const int arr[], const int len){
    int sum = array_sum(arr, len);
    return (double)sum / len;
    
}

int main(){
    /* int array_len = 252;
    scanf("%d", &array_len);
        BIG NO NO, HUGE NO NO!
    int vla[array_len]; */

    const int array[] = {100,2,3,4,5,6,7,8,6,5,33,23,5,67,7,78,4,20000,2,4,6};
    const int len = 21;
    printf("%d",array_avg(array, len));

}