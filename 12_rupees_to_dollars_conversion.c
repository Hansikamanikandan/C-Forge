#include <stdio.h>

int main()
{
    float rupees, dollars;

    printf("Enter amount in Rupees: ");
    scanf("%f", &rupees);

    dollars = rupees / 86;

    printf("Amount in Dollars = %.2f", dollars);

    return 0;
}
