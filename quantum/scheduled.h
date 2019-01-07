#ifndef SCHEDULED_H
#define SCHEDULED_H

typedef void (*scheduledFunc)(void);
typedef struct {
    scheduledFunc func;
    uint16_t timeout;
    uint8_t times;
} ScheduledConsoleItem;

void scheduleFunction(ScheduledConsoleItem item);

#endif