//Alomgir
//20-02-2022
//Programming project 6
//(((3x+2)x-5)x-1)x+7)x-6

#include<stdio.h>
int main(void)
{
    float x3,x,formula;
    printf("Enter the value of X: ");
    scanf("%f",&x);



    formula=((((x*3+2)*x-5)*x-1)*x+7)*x-6;
    printf("The value of the polynomial: %.5f\n\n",formula);
    return 0;
}
