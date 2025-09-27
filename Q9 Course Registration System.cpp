<<<<<<< HEAD
#include<stdio.h>
int main(){
	printf("----------University Course Registration System----------\n");
	int course,department;
	printf("Select a department (1.CS, 2.EE, 3.BBA) \n");
	scanf("%d",&department);
	switch(department)
	{
		case 1:
			printf(" ------Selected department is Computer Science CS------ \n");
			printf(" Select the course from following \n");
			printf(" 1.Data Structure \n 2.Algorithms Object-Oriented Programming (OOP)\n 3.Database Management Systems (DBMS) \n" );
			scanf("%d",&course);
			switch(course)
			{
				case 1:
					printf(" The selected course is Data Structure \n ");
					break;
				case 2:
					printf(" The selected course is Algorithms Object-Oriented Programming (OOP) \n ");
					break;
				case 3:
					printf(" The selected course is Database Management Systems (DBMS) \n ");
					break;
				default:
				    printf(" Invalid number entered \n");
					break;		
			}
			break;
		case 2:
			printf(" ------Selected department is Electrical Engineering EE------ \n");
			printf(" Select the course from following \n");
			printf(" 1.Circuit Analysis \n 2.Digital Logic Design \n 3.Electromagnetic Fields and Waves \n" );
			scanf("%d",&course);
			switch(course)
			{
				case 1:
					printf(" The selected course is Circuit Analysis \n ");
					break;
				case 2:
					printf(" The selected course is Digital Logic Design \n ");
					break;
				case 3:
					printf(" The selected course is Electromagnetic Fields and Waves \n ");
					break;
				default:
				    printf(" Invalid number entered \n");
					break;		
			}
			break;
		case 3:
			printf(" ------Selected department is Business Administration BBA------ \n");
			printf(" Select the course from following \n");
			printf(" 1.Principles of Accounting \n 2.Introduction to Marketing \n 3.Organizational Behavior \n" );
			scanf("%d",&course);
			switch(course)
			{
				case 1:
					printf(" The selected course is Principles of Accounting \n ");
					break;
				case 2:
					printf(" The selected course is Introduction to Marketing \n ");
					break;
				case 3:
					printf(" The selected course is Organizational Behavior \n ");
					break;
				default:
				    printf(" Invalid number entered \n");
					break;		
			}
			break;	
		default:
			printf(" Invalid number entered \n");
			break;
						
	}
	return 0;
}
=======
#include<stdio.h>
int main(){
	printf("----------University Course Registration System----------\n");
	int course,department;
	printf("Select a department (1.CS, 2.EE, 3.BBA) \n");
	scanf("%d",&department);
	switch(department)
	{
		case 1:
			printf(" ------Selected department is Computer Science CS------ \n");
			printf(" Select the course from following \n");
			printf(" 1.Data Structure \n 2.Algorithms Object-Oriented Programming (OOP)\n 3.Database Management Systems (DBMS) \n" );
			scanf("%d",&course);
			switch(course)
			{
				case 1:
					printf(" The selected course is Data Structure \n ");
					break;
				case 2:
					printf(" The selected course is Algorithms Object-Oriented Programming (OOP) \n ");
					break;
				case 3:
					printf(" The selected course is Database Management Systems (DBMS) \n ");
					break;
				default:
				    printf(" Invalid number entered \n");
					break;		
			}
			break;
		case 2:
			printf(" ------Selected department is Electrical Engineering EE------ \n");
			printf(" Select the course from following \n");
			printf(" 1.Circuit Analysis \n 2.Digital Logic Design \n 3.Electromagnetic Fields and Waves \n" );
			scanf("%d",&course);
			switch(course)
			{
				case 1:
					printf(" The selected course is Circuit Analysis \n ");
					break;
				case 2:
					printf(" The selected course is Digital Logic Design \n ");
					break;
				case 3:
					printf(" The selected course is Electromagnetic Fields and Waves \n ");
					break;
				default:
				    printf(" Invalid number entered \n");
					break;		
			}
			break;
		case 3:
			printf(" ------Selected department is Business Administration BBA------ \n");
			printf(" Select the course from following \n");
			printf(" 1.Principles of Accounting \n 2.Introduction to Marketing \n 3.Organizational Behavior \n" );
			scanf("%d",&course);
			switch(course)
			{
				case 1:
					printf(" The selected course is Principles of Accounting \n ");
					break;
				case 2:
					printf(" The selected course is Introduction to Marketing \n ");
					break;
				case 3:
					printf(" The selected course is Organizational Behavior \n ");
					break;
				default:
				    printf(" Invalid number entered \n");
					break;		
			}
			break;	
		default:
			printf(" Invalid number entered \n");
			break;
						
	}
	return 0;
}
>>>>>>> 13b2fa5ff6df6f8167b258426bd200e81a466513
