#include <stdio.h>

int main()
{
    int minutes, hours, seconds;

    printf("Enter Minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    seconds = minutes * 60;

    printf("Hours = %d\n", hours);
    printf("Seconds = %d", seconds);

    return 0;
}
