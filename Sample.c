#include<stdio.h> /* this is header (preprocessor comand) */
int main(void) /*  main function */
{     /* here { is statement opening tag */
    int height, length, width, volume, weight;
    height=8;   //integer type
    length=12;
    width=10;
    volume = height*length*width;   //formula
    weight= (volume+165)/166;
    printf("Dimensions: %d*%d*%d\n", height*length*width); //statement
    printf("Volume (cubic inches):%d\n", volume);
    printf("Dimensional weight (pounds): %d\n\n\n\n", weight);

   printf("************My bio****** **********\n");
   printf("*     Hi this is me- Alomgir      *\n");
   printf("*     my bio...............t      *\n");
   printf("***********************************\n\n\n");


printf("KEYWORDS  (see it in source)\n");
printf("             !!!!!          \n\n");
//auto else Long switch break enum register typedef case extern return union
// char float short unsigned const for signed void continue goto sizeof
// volatile default if static while do int struct _packed double


printf("Dweight2.c\n\n ");
/* Computes the dimensional weight of a box from input provided by the user*/

{
    int heigth,length, width,volume,weight;
 printf("Enter height of box: ");
 scanf("%d",&heigth);
 printf("Enter length of box: ");
 scanf("%d",&length);
 printf("Enter width of box: ");
 scanf("%d", &width);
 volume= heigth*length*width;
 weight=(volume+165)/166;

 printf("Volume (cubic inches):%d\n", volume);
 printf("Dimensional weight (pounds): %d\n",weight);
}





   return 0;
}
