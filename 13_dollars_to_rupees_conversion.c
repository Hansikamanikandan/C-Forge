#include <stdio.h>

int main()
{
    float dollars, rupees;

    printf("Enter amount in Dollars: ");
    scanf("%f", &dollars);

    rupees = dollars * 86;

    printf("Amount in Rupees = %.2f", rupees);

    return 0;
}
