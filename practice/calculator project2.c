#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("----------CALCULATOR----------- \n ");
	printf("1.ADDITION \n");
	printf("2.SUBSTRACTION \n");
	printf("3.MULTIPLICATION \n");
	printf("4.DIVISION \n");
	printf("5.odd or even \n");
	printf("\n select your option \n");
	scanf("%d",&n);
	switch(n){
		case 1:
			{
				int i;
				int j;
				int k;
				printf("enter the first digit \n");
				scanf("%d",&i);
				printf("enter the second digit \n");
				scanf("%d",&j);
				k = i+j;
				printf("the addition of two digits is %d \n",k);
				break;
			}
		case 2:
			{
				int i = 20;
				int j = 10;
				int k = i-j;
				printf("the substracted number is %d \n",k);
				break;
			}
		case 3:
			{
				int i;
				int j;
				int k;
				printf("enter the first digit \n");
				scanf("%d",&i);
				i=i+2;
				printf("enter the second digit \n");
				scanf("%d",&j);
				j=j-2;
				k=i*j;
				printf("the multiplied answer is %d \n",k);
				break;
			}
		case 4:
			{
			int i;
			scanf("%d",&i);
			if(i % 5==0)
			{
			   printf("this number is divided by 5");
			   }
			   else {
			   printf("this number is not divided by 5");
				
			}
			break;
			}
		case 5:
			{
				int i = 20;
				{
				for(i=0;i<=20;i++)
				{
					if(i % 2 == 0)
					printf("this is even number %d \n",i);
				}
				for(i=0;i<=20;i++)
				{
				 if(i % 3 == 0)
				 printf("this is odd number %d \n",i);
				}
				}
			}
			default :
		printf("choose the correct option");
	}
	return 0;
}
