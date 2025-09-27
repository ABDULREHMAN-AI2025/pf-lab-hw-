
#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c,discriment,realPart,imaginaryPart;
	double root1,root2;
	printf("CHECKING NATURE OF ROOTS \n");
	printf("General Equation is : ax^2+bx+c \n");
	printf("Enter value of constant a,b,c \n");
	scanf("%lf %lf %lf",&a,&b,&c);
	discriment=b*b-4*a*c;
	if(a!=0)
	{
		if(discriment>0)
		{
			printf(" Roots are real and Distinct \n");
			root1= (-b+sqrt(discriment) )/(2*a);
	        root2= (-b-sqrt(discriment) )/(2*a);
			printf(" Root 1 : %.2lf \n Root 2 : %.2lf \n",root1,root2);
			
		}else if(discriment==0)
		{
			printf(" Roots are real and Equal \n");
			root1= -b /(2*a);
	        root2= -b/(2*a);
			printf(" Root 1 : %.2lf \n Root 2 : %.2lf \n",root1,root2);
			
		}else
		{
			printf(" Roots are Imaginary \n");
			realPart= -b/(2*a);
	        imaginaryPart= sqrt(-discriment)/(2*a);
			printf(" Root 1 : %.2lf + %.2lfi \n ",realPart,imaginaryPart);
			printf("Root 2 : %.2lf - %.2lfi \n",realPart,imaginaryPart);
		}
	}else
	{
		printf("you entered Invalid Value of a \n");
	}
	return 0;
}

