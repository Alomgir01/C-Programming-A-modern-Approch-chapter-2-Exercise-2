/* Computes the dimensional weight of a box from input provided by the user*/
 #include<stdio.h>
 int main(void)
 {
 int heigth,length, width,volume,weight;  //declear
 printf("Enter height of box: ");  //output
 scanf("%d",&heigth);               //input
 printf("Enter length of box: ");
 scanf("%d",&length);
 printf("Enter width of box: ");
 scanf("%d", &width);
 volume= heigth*length*width;
 weight=(volume+165)/166;          //formula

 printf("Volume (cubic inches):%d\n", volume);
 printf("Dimensional weight (pounds): %d\n",weight);
 return 0;
 }
