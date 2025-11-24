#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "macka.c"

#define STUD_CNT 10



int main(){
    srand(time(NULL));

    /* int student_ids[STUD_CNT];
    float student_avgs[STUD_CNT];

    student_array_init(student_ids, student_avgs, STUD_CNT);
  */
    struct student bela = {
        .id = 7,
        .type = COURSE_MSC,
        .age = 67,
        .avg = 2.3

    };

    /* printf("sizeof(struct student) = %lu", sizeof(bela)); */

    student_print(&bela);

    return 0;
}