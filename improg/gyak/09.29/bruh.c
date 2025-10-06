#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

bool is_leap_year(int year){
    return (0 == (year % 4)
            && 0 != (year % 100))
            || 0 == (year % 400);
}


int 
main
(
)
{
    unsigned int random = rand(0,101);
    unsigned int tries = 0;
    while (tries < 6){
        unsigned int try;
        scanf("%u", &try);
        if(try == random){
            printf("You Won!");
            break;
        } else if (try > random){
            printf("Smaller!");
        } else {
            printf("Bigger!");
        }
    }
    /* unsigned 
    int 
    u 
    = 
    11
    ;
    while
    (
        u
        >
        0
    )
    {
        printf
        (
            "%u\n"
            ,
            --u
        )
        ;
    } */
    
    int year;
    printf("year: \n");
    scanf("%d", &year);
    printf("%s\n", is_leap_year(year) ? "Szokik!\n" : "Marad!\n");
/*     switch(is_leap_year(year)){
        case true:
        printf("Szokik\n");
        break;
        case false:
        printf("Marad!\n");
        break;
    }
    return 0; */


}