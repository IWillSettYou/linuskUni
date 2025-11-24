#ifndef __IMP_PROG_ELTE_MACKA_HEADER__
#define __IMP_PROG_ELTE_MACKA_HEADER__

void student_array_init(int* student_ids, float* student_avgs, const int len);

enum course_type {COURSE_BSC, COURSE_MSC, COURSE_PHD};

union student_extension {
    int course_cnt; //for BSC
    double cor_avg; //for MSC
    struct {        //for PHD
        int erdos_num;
        double imp_fact;
    };
};

struct student {
    int id;    //2b
    enum course_type type;
    short age; //4b
    double avg;//8b

    enum course_type type;
    union student_extension ext;
};

typedef struct student student_s;
typedef unsigned int uint;

student_s* student_create(int id, short age, double average);

void student_print(const student_s* student);

#endif //__IMP_PROG_ELTE_MACKA_HEADER__