#include<stdio.h>

typedef int u16;

typedef struct
{
    u16 hour;
    u16 minute;
    u16 seconds;
}time;

time timeDifference(time first, time second);

void main() {
    time line1, line2, difference;
    printf("Enter hours, minutes and seconds for 1st\n");
    scanf(" %d",&line1.hour);
    scanf(" %d",&line1.minute);
    scanf(" %d",&line1.seconds);
    
    printf("Enter hours, minutes and seconds for 2st\n");
    scanf(" %d",&line2.hour);
    scanf(" %d",&line2.minute);
    scanf(" %d",&line2.seconds);

    difference = timeDifference(line1, line2);

    printf("%d:%d:%d",difference.hour, difference.minute, difference.seconds);

}


time timeDifference(time first, time second) {
    time diff;

    if (first.seconds < second.seconds)
    {
        --(first.minute);
        first.minute += 60;
    }
    
    diff.seconds = first.seconds - second.seconds;
    if (first.minute < second.minute)
    {
        --(first.hour);
        first.hour += 60;
    }
    
    diff.minute = first.minute - second.minute;
    diff.hour = first.hour - second.hour;
    
    return diff;
}