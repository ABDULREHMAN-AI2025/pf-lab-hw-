<<<<<<< HEAD
#include<stdio.h>
int main(){
	int age,movie;
	printf(" Enter your age \n");
	scanf("%d",&age);
	if (age<12)
	{
		printf(" Select Movie type(1.Action 2.Comedy 3.Horror) \n");
		scanf("%d",&movie);
		switch(movie)
		{
			case 1:
				printf(" You have booked your child ticket for Action Movie \n");
				break;
			case 2:
				printf(" You have booked your child ticket for Comedy Movie \n");
				break;
			case 3:
				printf(" You have booked your child ticket for Horror Movie \n");
				break;	
			default:
			    printf(" Invalid Entered Selection \n");
				break;		
		}
	}else if (age>=12 && age<=60)
	{
		printf(" Select Movie type(1.Action 2.Comedy 3.Horror) \n");
		scanf("%d",&movie);
		switch(movie)
		{
			case 1:
				printf(" You have booked your Adult ticket for Action Movie \n");
				break;
			case 2:
				printf(" You have booked your Adult ticket for Comedy Movie \n");
				break;
			case 3:
				printf(" You have booked your Adult ticket for Horror Movie \n");
				break;	
			default:
			    printf(" Invalid Entered Selection \n");
				break;		
		}
	}else if(age>60)
	{
		printf(" Select Movie type(1.Action 2.Comedy 3.Horror) \n");
		scanf("%d",&movie);
		switch(movie)
		{
			case 1:
				printf(" You have booked your Citizen ticket for Action Movie \n");
				break;
			case 2:
				printf(" You have booked your Citizen ticket for Comedy Movie \n");
				break;
			case 3:
				printf(" You have booked your Citizen ticket for Horror Movie \n");
				break;	
			default:
			    printf(" Invalid Entered Selection \n");
				break;		
		}
	}else {
		printf("Invalid Age is Entered \n");
	}
	return 0;
}
=======
#include<stdio.h>
int main(){
	int age,movie;
	printf(" Enter your age \n");
	scanf("%d",&age);
	if (age<12)
	{
		printf(" Select Movie type(1.Action 2.Comedy 3.Horror) \n");
		scanf("%d",&movie);
		switch(movie)
		{
			case 1:
				printf(" You have booked your child ticket for Action Movie \n");
				break;
			case 2:
				printf(" You have booked your child ticket for Comedy Movie \n");
				break;
			case 3:
				printf(" You have booked your child ticket for Horror Movie \n");
				break;	
			default:
			    printf(" Invalid Entered Selection \n");
				break;		
		}
	}else if (age>=12 && age<=60)
	{
		printf(" Select Movie type(1.Action 2.Comedy 3.Horror) \n");
		scanf("%d",&movie);
		switch(movie)
		{
			case 1:
				printf(" You have booked your Adult ticket for Action Movie \n");
				break;
			case 2:
				printf(" You have booked your Adult ticket for Comedy Movie \n");
				break;
			case 3:
				printf(" You have booked your Adult ticket for Horror Movie \n");
				break;	
			default:
			    printf(" Invalid Entered Selection \n");
				break;		
		}
	}else if(age>60)
	{
		printf(" Select Movie type(1.Action 2.Comedy 3.Horror) \n");
		scanf("%d",&movie);
		switch(movie)
		{
			case 1:
				printf(" You have booked your Citizen ticket for Action Movie \n");
				break;
			case 2:
				printf(" You have booked your Citizen ticket for Comedy Movie \n");
				break;
			case 3:
				printf(" You have booked your Citizen ticket for Horror Movie \n");
				break;	
			default:
			    printf(" Invalid Entered Selection \n");
				break;		
		}
	}else {
		printf("Invalid Age is Entered \n");
	}
	return 0;
}
>>>>>>> 13b2fa5ff6df6f8167b258426bd200e81a466513
