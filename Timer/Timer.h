#if !defined(Timer_H)
#define Timer_H

#include <stdbool.h>

typedef struct 
{
    int targetTime;
    bool repeat;
    bool finished;

    /* data */
}Timer;




#endif // Timer_H
