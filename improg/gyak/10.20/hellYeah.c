#include <stdio.h>

void swap(int * a_p, int * b_p){
    int tmp = *a_p;
    *a_p = *b_p;
    *b_p = tmp;
}

int main(){
    
  int a = 42;
  int b = 100;

  printf("a: %d, b: %d\n", a, b);

  swap(&a, &b);

  printf("a: %d, b: %d\n", a, b);

  return 0;
}