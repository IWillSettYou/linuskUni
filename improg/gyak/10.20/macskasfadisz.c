#include <stdio.h>
#include <math.h>
#include <string.h>

#define LEN 64

void swap_char(char* a, char* b){
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

int switch_digits_str(const int num){
    char str[LEN];
    sprintf(str, "%d", num);
    const int len = strlen(str);
    swap_char(&str[0], &str[len - 1]);
    int res;
    sscanf(str, "%d", &res);

    return res;


}

int switch_digits(const int num){

   
    const int magn = log10(num);
    if (magn < 3) {return num;}

    const int ten_pow = pow(10, magn);
    const int last_digit = num / ten_pow;
    const int first_digit = num % 10;

    int res = num;
    res -= first_digit;
    res += last_digit;
    res -= pow(10, magn) * last_digit;
    res += pow(10, magn) * first_digit;
    return res;
}

int sum_till_n(const int n){

    return ((n + 1)* n) / 2;
}

#define SIZE 10

int main(int argc, char* argv[]){

    int input2 = -1;
    char* str = "kiscica";
    char* str_arr[] = {
        "kiscicca",
        "hello",
        "idkbro"
    };
        
    if(argc < 2) {
        sscanf(argv[1], "%d", &input);
        input2 = atoi(argv[i]);
    }

    for(int i = 0; i < argc; ++i){
        printf("%s\n", argv[i]);
    }

    int mult_table[SIZE][SIZE];

    for (int i = 0; i < SIZE; ++i){
        for(int k = 0; k < SIZE; ++k){
            mult_table[i][k] = (i + 1) * (k + 1); 
        }
    }

    for (int i = 0; i < SIZE; ++i){
        for(int k = 0; k < SIZE; ++k){
            printf("%d x %d = %d\n", (i + 1), (k + 1), mult_table[i][k]);
        }
    }
    printf("%d",sum_till_n(1000000));



    int input;
    scanf("%d", &input);
    
    printf("%d\n", switch_digits(input));
    printf("%d\n", switch_digits_str(input));


    return 0;


}
