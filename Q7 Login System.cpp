#include<stdio.h>
#include<string.h>
int main()
{
	char userId[50],pasword[50];
	char id[]="abdulrehman1@gmail.com";
	char pass[]="1234";
	printf("---------------Login System--------------- \n");
	
	printf("Enter UserId \n");
	scanf("%s",&userId);
	if (strcmp(userId,id) == 0 ){
		printf("Enter userId Pasword \n");
		scanf("%s",pasword);
		if(strcmp(pasword,pass)==0)
		{
			printf("-----Login succesful------ \n");
		}
		else{
			printf("In Valid Pasword");
		}
		
	}else{
		printf("In Valid UserId ");
	}
	return 0;
}

