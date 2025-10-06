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
 int str_cmp(char str1[], char str2[]){
        int i = 0;
        while('\0' != str1[i] && '\0' != str2[i]){
            if(str1[i] != str2[i]){
                
            }
            i++;
        }
        return str1[i] - str2[i];
    }
#include <string.h>
int main(){
    /* int array_len = 252;
    scanf("%d", &array_len);
        BIG NO NO, HUGE NO NO!
    int vla[array_len]; */

    /* const int array[] = {100,2,3,4,5,6,7,8,6,5,33,23,5,67,7,78,4,20000,2,4,6};
    const int len = 21;
    printf("%d",array_avg(array, len)); */
   

    const char *str1 = "kiscica";
    const char *str2 = "kiscica";
    const int cmp = str_cmp(str1, str2);
    printf("cmp = %d\n", cmp);

    const int official_cmp = strcmp(str1,str2);

    const int strlen = strlen(str1);
}