#include <stdio.h>

int main()
{
    float m1, m2, m3, m4, m5, average;

    printf("Enter five subject marks: ");
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);

    average = (m1 + m2 + m3 + m4 + m5) / 5;

    printf("Average = %.2f", average);

    return 0;
}
