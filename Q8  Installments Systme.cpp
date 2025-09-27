#include<stdio.h>
#include<math.h>
int main(){
	float monthlyInstallment,total,loanAmount,interestType,time,simpleInterest,compoundInterest;
	//question doesnot have rate let assume rate of 10%
	
	printf("----------Loan Monthly Installments System---------- \n");
	printf("Enter your Loan Amount Rs \n");
	scanf("%f",&loanAmount);
	if(loanAmount>0){
		printf("Enter how much time you will require to pay Loan(in years)  \n");
	    scanf("%f",&time);
	    if (time>0){
	    	printf("Enter whisch Intrest type simple or compount(1 for simple 0 for compound)\n");
	        scanf("%f",&interestType);
	        if(interestType==1){
	        	simpleInterest=(loanAmount*10*time)/100;
	        	total=simpleInterest+loanAmount;
	        	//for monthly installment
	        	monthlyInstallment=total/(time*12);
	        	printf("Your monthly installment is : %.2f \n",monthlyInstallment);
			}else {
				compoundInterest=loanAmount*(pow((1+0.1),time)-1);
				total=loanAmount+compoundInterest;
				monthlyInstallment=total/(time*12);
				printf("Your monthly installment is : %.2f Rs \n ",monthlyInstallment);
			}
		}else{
			printf("Invalid Time entered \n");
		}
    }else {
    	printf("Invalid loanAmount entered \n");
	} 
	return 0;
}
