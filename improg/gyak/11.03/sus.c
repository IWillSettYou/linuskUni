#include <stdio.h>
#include "sus.h"

void hw(){
    printf("Hello from :%s:%d\n", __FILE__, __LINE__);
}

uint fact(int num){
    
    if(2 == num){
        return 2;
    } else if ((1 == num || 0 == num)) {
        return 1;
    }

    return num * fact(num - 1);
}