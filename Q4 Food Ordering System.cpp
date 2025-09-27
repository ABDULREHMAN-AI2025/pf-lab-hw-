<<<<<<< HEAD
#include<stdio.h>
int main(){
	int onlineFood,selection;
		printf("----------Online Food Ordering System----------\n");
		printf("Enter what you want to order (1 for fastfood and 0 for dirnks) \n");
		scanf("%d",&onlineFood);
	switch(onlineFood)
	{
		case 1:
			printf("--What do you want to eat (enter number)-- \n");
			printf("==================FOOD MENU================== \n");
			printf(" 1.Biryani \n 2.Chicken karhai \n 3.Chicken Roll \n 4.Zinger Burger \n");
			scanf("%d",&selection);
			switch(selection)
			{
				case 1:
					printf("Biryani will be surved shortly \n");
					break;
				case 2:
					printf("Chicken Karhai will be surved shortly \n");
					break;
				case 3:
					printf("Chicken Roll will be surved shortly \n");
					break;
				case 4:
				    printf("Zinger Burger will be surved shortly \n");
					break;	
				default:
					printf("INVALID entry \n");
				    break;
			}
			break;
		case 0:
		    printf("------What do you want to drink (enter number)------ \n");
		    printf("==================DRINK MENU================== \n");
			printf(" 1.Pepsi \n 2.Coke \n 3.Sprite \n 4.Fanta \n");
			scanf("%d",&selection);
			switch(selection)
			{
					case 1:
					printf("Pepsi will be surved shortly \n");
					break;
				case 2:
					printf("Coke will be surved shortly \n");
					break;
				case 3:
					printf("Sprite will be surved shortly \n");
					break;
				case 4:
				    printf("Fanta will be surved shortly \n");
					break;	
		    }
		    break;
	    default:
	    	printf("INVALID entry \n");
	    	break;
	}   
	printf("THANKS FOR YOUR ORDER \n");
	return 0;
}

=======
#include<stdio.h>
int main(){
	int onlineFood,selection;
		printf("----------Online Food Ordering System----------\n");
		printf("Enter what you want to order (1 for fastfood and 0 for dirnks) \n");
		scanf("%d",&onlineFood);
	switch(onlineFood)
	{
		case 1:
			printf("--What do you want to eat (enter number)-- \n");
			printf("==================FOOD MENU================== \n");
			printf(" 1.Biryani \n 2.Chicken karhai \n 3.Chicken Roll \n 4.Zinger Burger \n");
			scanf("%d",&selection);
			switch(selection)
			{
				case 1:
					printf("Biryani will be surved shortly \n");
					break;
				case 2:
					printf("Chicken Karhai will be surved shortly \n");
					break;
				case 3:
					printf("Chicken Roll will be surved shortly \n");
					break;
				case 4:
				    printf("Zinger Burger will be surved shortly \n");
					break;	
				default:
					printf("INVALID entry \n");
				    break;
			}
			break;
		case 0:
		    printf("------What do you want to drink (enter number)------ \n");
		    printf("==================DRINK MENU================== \n");
			printf(" 1.Pepsi \n 2.Coke \n 3.Sprite \n 4.Fanta \n");
			scanf("%d",&selection);
			switch(selection)
			{
					case 1:
					printf("Pepsi will be surved shortly \n");
					break;
				case 2:
					printf("Coke will be surved shortly \n");
					break;
				case 3:
					printf("Sprite will be surved shortly \n");
					break;
				case 4:
				    printf("Fanta will be surved shortly \n");
					break;	
		    }
		    break;
	    default:
	    	printf("INVALID entry \n");
	    	break;
	}   
	printf("THANKS FOR YOUR ORDER \n");
	return 0;
}

>>>>>>> 13b2fa5ff6df6f8167b258426bd200e81a466513
