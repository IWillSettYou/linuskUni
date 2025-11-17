#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* int_array_create(const unsigned int len){
    return malloc(len * sizeof(int));

}

int idk() {
    const int len = 10;

    int* arr10 = int_array_create(len);
    if(NULL == arr10){
        printf("Malloc failed! KYS!\n");
        exit(1);
    }

    for(int i = 0; i < len; ++i){
        arr10[i] = i + 1;
        printf("%d ", arr10[i]);
    }
    printf("\n");
    free(arr10);
}

#define LEN 67

char* str_dyn_cpy(const char* str){
   
   char* copy = malloc((strlen(str) + 1) * sizeof(char));

   if(NULL == copy){
        printf("Malloc failed! KYS!\n");
        exit(1);
    }

    strcpy(copy, str);
    return copy;
}

char* str_reverse(const char* str){

    int len = strlen(str);

    char* copy = malloc((len + 1) * sizeof(char));

    if(NULL == copy){
        printf("Malloc failed! KYS!\n");
        exit(1);
    }

    char rev[LEN];

    for(int i = len; i > 0; --i){
        rev[i - 1] = str[len - i];
    }


    strcpy(copy, rev);
    return copy;
}

int idk2(){
    char buff[LEN];
    fgets(buff, LEN, stdin);

    char* copy = str_reverse(buff);

    printf("%s\n", copy);

    free(copy);

}

void exer_six(){
    char buff[LEN]; int len = 10, cnt = 0;
    int* vector = int_array_create(len);

    if(NULL == vector){
            printf("Malloc failed! KYS!\n");
            exit(1);
        }
    
    while(NULL != fgets(buff, LEN, stdin)){
        const int num = atoi(buff);

        if(cnt == len){
            len = len * 2;
            vector = realloc(vector, sizeof(int) * len);
        }

        vector[cnt++] = num;

    }

    for (int i = 0; i < len; ++i){
        printf("%d ", vector[cnt - i - 1]);
    }

    printf("\n");
    free(vector);
}

int main(){
    exer_six();

}