#ifndef __TAREFAS_PMU_H
#define __TAREFAS_PMU_H

void System_Time(void *parm);
void PMU_Task(void const *argument);
void UpLwIP(void *param);
void GPS_Task(void const *argument);
void EmWinTask(void *param);

#endif
