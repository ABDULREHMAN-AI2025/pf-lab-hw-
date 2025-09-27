#include<stdio.h>
int main(){
	int shape,calculation;
	float base,height,area,perimeter,side1,side2,side3;
	float length,width,radius;
	printf("----------Geometry Calculator----------\n");
	printf("Select a Geometrical Shape from the following (Enter the serial number) \n");
	printf(" 1.Triangle \n 2.Rectangle \n 3.circle \n");
	scanf("%d",&shape);
	 switch(shape)
	 {
		case 1:
			printf("----------Selected shape is Triangle---------- \n");
			printf(" What do you want to calculate area or perimeter (Enter 1 or 0) \n");
			scanf("%d",&calculation);
			switch(calculation)
			{
				case 1:
					printf(" Enter Base and height of Triangle \n ");
				    scanf("%f%f",&base,&height);
				    area=(1/2)*base*height;
				    printf(" Area of triangle  is : %.2f",area);
				    break;
				case 2:
				    printf(" Enter three Sides of Triangle \n ");
				    scanf("%f%f%f",&side1,&side2,&side3);
				    perimeter=side1+side2+side3;
				    printf(" Perimeter of triangle  is : %.2f",perimeter);
				    break;  
				default:
					printf(" Invalid Entry \n");;
					break;
			}
			break;
		case 2:
			printf("----------Selected shape is Rectangle---------- \n");
			printf(" What do you want to calculate area or perimeter (Enter 1 or 0) \n");
			scanf("%d",&calculation);
			switch(calculation)
			{
				case 1:
					printf(" Enter Length and Width of Rectangle \n ");
				    scanf("%f%f",&length,&width);
				    area=length*width;
				    printf(" Area of Rectangle is : %.2f \n",area);
				    break;
				case 2:
				    printf(" Enter Length and Width of Rectangle \n ");
				    scanf("%f%f",&length,&width);
				    perimeter=2*(length*width);
				    printf(" Perimeter of Rectangle is : %.2f \n",perimeter);
				    break;  
				default:
					printf(" Invalid Entry \n");;
					break;
			}
			break;
		case 3:
		    printf("----------Selected shape is Circle---------- \n");
			printf(" What do you want to calculate area or perimeter (Enter 1 or 0) \n");
			scanf("%d",&calculation);
			switch(calculation)
			{
				case 1:
					printf(" Enter Radius of Circle \n ");
				    scanf("%f",&radius);
				    area=3.14*radius*radius;
				    printf(" Area of Circle is : %.2f \n",area);
				    break;
				case 2:
				    printf(" Enter Radius of Circle \n ");
				    scanf("%f",&radius);
				    perimeter=2*3.142*radius;
				    printf(" Perimeter of Circle is : %.2f \n",perimeter);
				    break;  
				default:
					printf(" Invalid Entry \n");;
					break;
			}
			break;
		default:
			printf(" Invalid Entry \n");;
			break;		
	 }
	 return 0;
			
	}
