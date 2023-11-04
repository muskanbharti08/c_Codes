# include <stdio.h>
void main(){

int r;
printf("Enter the radius\n");
scanf("%d",&r);

float area = 3.14*r*r;
printf("The area of circle is %f \n",area);

float perimeter = 2*3.14*r;
printf("The perimeter of circle is %f \n",perimeter);

int diameter = 2*r;
printf("The diameter of circle is %d \n",diameter);

}