#if !defined(TIMERMANAGER_H)
#define TIMERMANAGER_H

#include "Timer.h"

#define maxTimers 20

Timer *timers[maxTimers];
int timerIndexingCounter = 0;

int activeTimerCounter = 0;
int activeTimers[maxTimers];

long currentTime;

void UpdateTimerManager();

void PlayTimer(Timer *timerPtr);
void StopTimer(Timer *timerPtr);

void SetTimer(Timer *timerPtr, long targetTime, bool repeat);

void UpdateTimer();
void ResetTimer();
long millis();

#endif // TIMERMANAGER_H
