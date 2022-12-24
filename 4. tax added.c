//Alomgir
//20-02-2022
//Programming project 4

#include <stdio.h>
#define TAX 0.05f
int main(void)
{
    float amount;

   printf("Enter an amount: ");
   scanf("%f", &amount);                  //input

   printf("With tax added: $%.2f\n", amount + amount * TAX);    //formula

  return 0;
}
