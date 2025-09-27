<<<<<<< HEAD
#include<stdio.h>
int main(){
	int units,constantBill1,Bill,constantBill2,constantBill3;
	printf("Enter your electricity bill units \n ");
	scanf("%d",&units);
	if (units>0)
	{
		if(units<=100){
			Bill=5*units;
			printf("Your electricity bill is : %d \n",Bill);	
		}else {
		    constantBill1=5*100;
		    constantBill2=7*100;
		    constantBill3=10*100;
		if(units>100 && units<=200){
			Bill=(units-100)*7+constantBill1;
			printf("Your electricity bill is : %d \n",Bill);	
		}else if(units>200 && units<=300){
			Bill=(units-200)*10+constantBill2+constantBill1;
			printf("Your electricity bill is : %d \n",Bill);	
		}else if(units>300 ){
			Bill=(units-300)*15+constantBill3+constantBill2+constantBill1;
			printf("Your electricity bill is : %d \n",Bill);
		}
	 }
	}else{
		printf("IN VALID units enter \n");
	}
	return 0;
}


=======
#include<stdio.h>
int main(){
	int units,constantBill1,Bill,constantBill2,constantBill3;
	printf("Enter your electricity bill units \n ");
	scanf("%d",&units);
	if (units>0)
	{
		if(units<=100){
			Bill=5*units;
			printf("Your electricity bill is : %d \n",Bill);	
		}else {
		    constantBill1=5*100;
		    constantBill2=7*100;
		    constantBill3=10*100;
		if(units>100 && units<=200){
			Bill=(units-100)*7+constantBill1;
			printf("Your electricity bill is : %d \n",Bill);	
		}else if(units>200 && units<=300){
			Bill=(units-200)*10+constantBill2+constantBill1;
			printf("Your electricity bill is : %d \n",Bill);	
		}else if(units>300 ){
			Bill=(units-300)*15+constantBill3+constantBill2+constantBill1;
			printf("Your electricity bill is : %d \n",Bill);
		}
	 }
	}else{
		printf("IN VALID units enter \n");
	}
	return 0;
}


>>>>>>> 13b2fa5ff6df6f8167b258426bd200e81a466513
