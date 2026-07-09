#include <stdio.h>

int main()
{
    float basicPay, da, hra, allowance, tax, grossSalary;

    printf("Enter Basic Pay: ");
    scanf("%f", &basicPay);

    da = 0.40 * basicPay;
    hra = 0.10 * basicPay;
    allowance = 2000;
    tax = 0.10 * basicPay;

    grossSalary = basicPay + da + hra + allowance - tax;

    printf("Gross Salary = %.2f", grossSalary);

    return 0;
}
