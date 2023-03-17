#include <stdio.h>
#define PI 3.14159

int main(void)
{
	double radius;
	double area;
	double circum;

	printf("                                     WELCOME\n\n");
	printf(" This program helps you to calculate the area and the circumference of circle\n");
	printf("\nEnter radius -> ");
	scanf("%lf", &radius);

	area = PI * radius * radius;

	circum = 2 * PI * radius;

	printf("\nThe area is %.4f\n", area);
	printf("\nThe circumference is %.4f\n\n\n", circum);
	printf(" \n\n\n\n"
	      "	                                                    *****************\n"
          "			                                    * OMER GOKDERE  *\n"
          "	                                                    *****************\n");

	return 0 ; 
}