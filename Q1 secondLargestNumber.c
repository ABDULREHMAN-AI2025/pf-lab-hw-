#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter value of first number a :\n");
    scanf("%d",&a);
    printf("Enter value of second number b : \n");
    scanf("%d",&b);
    printf("Enter value of third number c :\n");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        if (b>c)
        {
            printf("b = %d is the second largest number\n",b);
        }else if (c>b){
            printf("c = %d is the second largest number\n",c);
        }    
    }
    else if (c>a && c>b)
    {
        if (a>b)
        {
            printf("a = %d is the second largest number\n",a);
        }else if (b>a){
            printf("b = %d is the second largest number\n",b);
        }    
    }
    else if (b>a && b>c)
    {
        if (c>a)
        {
            printf("c = %d is the second largest number\n",c);
        }else if(a>c) { 
            printf("a = %d is the second largest number\n",a);
        }          
    }
    return 0;
}