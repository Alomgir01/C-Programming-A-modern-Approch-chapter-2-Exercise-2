/*Converts a Fahrenheit temperature to Celsius */
#include<stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int main (void)

{
    float fahrenheit,celcius;
printf("Enter Fahrenheit temperature: ");
scanf("%f",&fahrenheit);
celcius=(fahrenheit-FREEZING_PT)*SCALE_FACTOR;
printf("celcius equivalent: %.2f\n",celcius);
return 0;
}
  /* #include<stdio.h>
  int main()
 { float c,f;
  printf("Enter centigrate: ");
  scanf("%f",&c);
  F=(c*1.8)+32;
  printf("Farenheight is:%f",f);
  return 0:
 }
