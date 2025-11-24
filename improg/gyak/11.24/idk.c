#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 67

char* str_dup(const char* str){
   
   char* copy = malloc((strlen(str) + 1) * sizeof(char));

   if(NULL == copy){
        printf("Malloc failed! xd!\n");
        exit(1);
    }

    strcpy(copy, str);
    return copy;
}

int main(){
    char buff[LEN];
    fgets(buff, LEN, stdin);

    char* copy = str_dup(buff);

    printf("%s\n", copy);

    free(copy);

}