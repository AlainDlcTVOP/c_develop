#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//Define the struct
typedef struct
{
    uint8_t number;
    char *name;
} Weekdays;

int main()
{
    //Declare and initialize a struct to represent week.
    Weekdays day[] = {{0, "monday"}, {1, "tuesday"}, {2, "wednesday"}, {3, "thursday"}, {4, "friday"}, {5, "saturday"}, {6, "sunday"}};

    //Use the array and print the first and last day
    printf("%s\n", day[0].name);
    printf("%s\n", day[6].name);
    //Create a pointer to the struct array

    Weekdays *pday; // Pekare till struts
    pday = day;

  
    //Use the array pointer and print the first and last day
 

    printf("%s\n",pday[0].name);
    printf("%s\n",pday[6].name);

    free(pday);
    return 0;
}