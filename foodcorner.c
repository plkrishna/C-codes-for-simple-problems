//Food corner Problem
#include<stdio.h>
int main()
{
	char choice;
	int quantity,distance,bill_amount;
	printf("Enter type of food(N/V):");
	scanf("%c",&choice);
	printf("Enter quantity:");
	scanf("%d",&quantity);
	printf("Enter distance(in kms) from the restaurant to delivery point:");
	scanf("%d",&distance);
	bill_amount=0;
	if((choice=='N'||choice=='V')&&quantity>0&&distance>0)
	{
		if(choice=='N')
		bill_amount+=150*quantity;
		if(choice=='V')
		bill_amount+=120*quantity;
		if(distance<=3);
		else if(distance<=6)
		bill_amount+=(distance-3)*3;
		else
		bill_amount+=(distance-6)*6+9;
	}
	else
	bill_amount=-1;
	printf("Bill amount:%d",bill_amount);
	return 0;
}
