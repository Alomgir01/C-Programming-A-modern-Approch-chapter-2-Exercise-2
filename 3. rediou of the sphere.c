//Alomgir
//20-02-2022
//Programming project 3

#include <stdio.h>
int main(void)
 {
    float radius,PI,volume;
    PI = 3.1416;

	printf("Input the radius of the sphere : ");
	scanf("%f",&radius);

	volume =(4.0/3.0)*PI*(radius*radius*radius);              //formula
	printf("The volume of sphere is %.2f\n",volume);
	return 0;
}

