#include <stdio.h>
#define TAXRATE .2
main() {
    float basesalary, taxRate, tax, bills, paid;
    printf("How much do you get paid? ");
    scanf(" £%f", &basesalary);
    printf("How much did you pay in bills this month?");
    scanf(" £%d", &bills);
    paid=basesalary*(1-TAXRATE);
    tax=TAXRATE*basesalary;
    printf("You paid £%.2f on Bills, which is %.2f%c of your salary after tax.", bills, bills/paid, '%');
    return 0;
}
