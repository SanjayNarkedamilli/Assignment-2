#include<stdio.h>

int main()
{
  
   int choice;
        printf("Select a choice: \n 1.Addition \n 2.Multiplication \n ");
        printf("Enter a choice: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            long int num1,num2;
            printf("Enter two decimal no.s: ");
            scanf("%ld %ld", &num1,&num2);
            long int sum=num1+num2;
            printf("Sum is: %ld \n",sum);
        }
        else if(choice==2)
        {
            long int num1,num2;
            printf("Enter two decimal no.s: ");
            scanf("%ld %ld",&num1,&num2);
            long int product=num1*num2;
            printf("Product is: %ld \n",product);
        }
        
    
    return 0;
}