// Write a program that calculates the remaining balance on a loan after the first, second and third monthly payment
//Author: Alomgir
//20-02-2022


#include <stdio.h>

int main(void)
{
    float loan, balance, interest_rate, monthly_rate, payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    balance = loan;

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    monthly_rate = (interest_rate / 100.0f) / 12;

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    balance = (balance - payment) + (balance * monthly_rate);             //first month
    printf("Balance remaining after first payment: $%.2f\n", balance);

    balance = (balance - payment) + (balance * monthly_rate);               // second month
    printf("Balance remaining after second payment: $%.2f\n", balance);

    balance = (balance - payment) + (balance * monthly_rate);           //third month
    printf("Balance remaining after third payment: $%.2f\n\n", balance);
     return 0;
}
