#include <stdio.h>

int main()
{
    int seconds, hours, minutes;

    printf("Enter Seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;

    printf("Hours = %d\n", hours);
    printf("Minutes = %d", minutes);

    return 0;
}
