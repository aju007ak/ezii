#include <stdio.h>
struct TIME
{
int sec;
int min;
int hou;
};
void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);
int main()
{
struct TIME startTime, stopTime, diff;
printf("Enter start time: \n");
printf("Enter hou, min and sec respectively: ");
scanf("%d %d %d", &startTime.hou, &startTime.min, &startTime.sec);
printf("Enter stop time: \n");
printf("Enter hou, min and sec respectively: ");
scanf("%d %d %d", &stopTime.hou, &stopTime.min, &stopTime.sec);
differenceBetweenTimePeriod(startTime, stopTime, &diff);
printf("\nTIME DIFFERENCE: %d:%d:%d - ", startTime.hou, startTime.min, startTime.sec);
printf("%d:%d:%d ", stopTime.hou, stopTime.min, stopTime.sec);
printf("= %d:%d:%d\n", diff.hou, diff.min, diff.sec);
return 0;
}
void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff)
{
if(stop.sec > start.sec){
--start.min;
start.sec += 60;
}
diff->sec = start.sec - stop.sec;
if(stop.min > start.min){
--start.hou;
start.min += 60;
}
diff->min = start.min - stop.min;
diff->hou = start.hou - stop.hou;
}
