#include "macka.h"

#include <stdio.h>
#include <stdlib.h>


void student_array_init(int* student_ids, float* student_avgs, const int len){
    for (int i = 0; i < len; i++)
    {
        student_ids[i] = rand();
        student_avgs[i] = (rand() % 5000 + 1) / 1000.0;
        printf("avg: %f\n", student_avgs[i]);
    }
    
}

void student_init(student_s* student, const int len){
    for (int i = 0; i < len; i++)
    {
        student[i] = (student_s) {
            .id = rand(),
            .age = 18 + (rand() % 102),
            .avg = (rand() % 5000 + 1) / 1000.0
        };
    }
}

student_s* student_create(const int id, const short age, const double avg){
    student_s* res = malloc(sizeof(*res)); // *res -> type of the type of the variable in case of cange
    if(NULL == res){
        return NULL;
    }

    *res = (student_s){
        .id = id,
        .age = age,
        .avg = avg
    };
/* 
    res->id = id;
    res->age = age; same as above
    res->avg = avg; 
    or (*res).id = id; ...
*/

    return res;
}

void student_print(const student_s* student){
   
    printf("avg of student %d is %f and they are %d years old", student->id, student->avg, student->age);
    
    
}
