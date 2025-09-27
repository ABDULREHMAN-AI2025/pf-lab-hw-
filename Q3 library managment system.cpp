<<<<<<< HEAD
#include<stdio.h>
int main(){
	int library,selection;
	printf("----------Library Management System----------\n");
	printf("Want do you want to manage books or magazines (Enter 1 or 0) \n");
	scanf("%d",&library);
	switch(library)
	{
		case 1:
			printf("Weather u want to issue or return book (Enter 1 or 0) \n");
			scanf("%d",&selection);
			switch(selection)
			{
				case 1:
					printf("YOUR BOOK HAS BEEN ISSUED \n");
					break;
				case 0:
					printf("YOUR BOOK HAS BEEN RETURNED \n");
					break;
				default:
					printf("INVALID entry \n");
				    break;
			}
			break;
		case 0:
			printf("Weather u want to issue or return magazine (Enter 1 or 0) \n");
			scanf("%d",&selection);
			switch(selection)
			{
				case 1:
					printf("YOUR MAGAZINE HAS BEEN ISSUED \n");
					break;
				case 0:
					printf("YOUR MAGAZINE HAS BEEN RETURNED \n");
					break;
				default:
					printf("INVALID entry \n");
				    break;
		    }
		    break;
	    default:
	    	printf("INVALID entry \n");
	    	break;
	}   
}
=======
#include<stdio.h>
int main(){
	int library,selection;
	printf("----------Library Management System----------\n");
	printf("Want do you want to manage books or magazines (Enter 1 or 0) \n");
	scanf("%d",&library);
	switch(library)
	{
		case 1:
			printf("Weather u want to issue or return book (Enter 1 or 0) \n");
			scanf("%d",&selection);
			switch(selection)
			{
				case 1:
					printf("YOUR BOOK HAS BEEN ISSUED \n");
					break;
				case 0:
					printf("YOUR BOOK HAS BEEN RETURNED \n");
					break;
				default:
					printf("INVALID entry \n");
				    break;
			}
			break;
		case 0:
			printf("Weather u want to issue or return magazine (Enter 1 or 0) \n");
			scanf("%d",&selection);
			switch(selection)
			{
				case 1:
					printf("YOUR MAGAZINE HAS BEEN ISSUED \n");
					break;
				case 0:
					printf("YOUR MAGAZINE HAS BEEN RETURNED \n");
					break;
				default:
					printf("INVALID entry \n");
				    break;
		    }
		    break;
	    default:
	    	printf("INVALID entry \n");
	    	break;
	}   
}
>>>>>>> 13b2fa5ff6df6f8167b258426bd200e81a466513
