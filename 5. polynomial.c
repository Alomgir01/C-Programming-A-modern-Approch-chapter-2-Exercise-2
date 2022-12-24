//Alomgir
//20-02-2022
//Programming project 5

#include<stdio.h>
int main(void)

{
    int x5,x4,x3,x2,x,formula;
    printf("Enter the value of X: ");
    scanf("%d",&x);
    x5=x*x*x*x*x;
    x4=x*x*x*x;
    x3=x*x*x;
    x2=x*x;
    formula=(3*x5)+(2*x4)-(5*x3)-(x2)+7*x-6;
    printf("The value of the polynomial: %d\n\n",formula);

}
