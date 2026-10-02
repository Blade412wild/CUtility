#if !defined(Timer_H)
#define Timer_H

#include <stdbool.h>



typedef struct 
{
    long targetTime;
    long previousTime;
    bool repeat;
    bool finished;
    int customEvent;
    int Index;

    /* data */
}Timer;


#endif // Timer_H
