
#include <stdio.h>
#include "TimerManager.h"


void InitTimer(Timer *timerPtr){

timers[timerIndexingCounter] = timerPtr;
timerPtr->Index = timerIndexingCounter;
timerPtr->previousTime = currentTime;

timerIndexingCounter++;

}

void SetTimer(Timer *timerPtr, long targetTime, bool repeat){
    timerPtr->targetTime = targetTime;
    timerPtr->repeat = repeat;
}

void UpdateTimerManager()
{

    if (activeTimerCounter == 0)
        return;

    currentTime = millis();

    for (int i = 0; i < activeTimerCounter; i++)
    {
        UpdateTimer(i);
    }
}

void UpdateTimer(int index)
{
    Timer* timerPtr = timers[index];
    long timePassed = currentTime - timerPtr->previousTime;

    if(timePassed >= timerPtr->targetTime){
        // timer finished;
        // timer->CustomEvent->Invoke

        if(timerPtr->repeat == false){
            //Remove from active list
        }
        
        timerPtr->previousTime = currentTime;
    }
}
