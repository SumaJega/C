#include<stdio.h>
#include<math.h>
#include"myprofile.h"
int main()
{
	documentation(__FILE__);
    	double a, b, c, determinant, root1,root2, realPart, imaginaryPart;
	printf("\nEnter coefficients a, b and c: ");
    	scanf("%lf %lf %lf",&a, &b, &c);
        determinant = b*b-4*a*c;
	// condition for real and different roots
	if (determinant > 0)
	{
	// sqrt() function returns square root
	root1 = (-b+sqrt(determinant))/(2*a);
	root2 = (-b-sqrt(determinant))/(2*a);
	printf("\nReal Roots");
	printf("\nroot1 = %.2lf \n root2 = %.2lf\n",root1 , root2);
	}

	//condition for real and equal roots
	else if (determinant == 0)
	{
	root1 = root2 = -b/(2*a);
	printf("\nEqual Roots");
	printf("\nroot1 = root2 = %.2lf;\n", root1);
	}

	// if roots are not real 
	else
	{
	realPart = -b/(2*a);
	imaginaryPart = sqrt(-determinant)/(2*a);
	printf("\nImaginary Roots");
	printf("\nroot1 = %.2lf+%.2lfi \n root2 = %.2lf-%.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
	}

	return 0;
}   
