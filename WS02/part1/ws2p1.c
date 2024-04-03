#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	const double tax = 0.13;
	double small; 				//17.96 * 8 = 143,68
	double medium;				
	double large;
	int qty, taxes, sub_total,total;
	
	
	
	printf("Set Shirt Prices\n");
	printf("================\n");
	
	printf("Enter the price for a SMALL shirt: $");
	scanf("%lf",&small);
	printf("Enter the price for a MEDIUM shirt: $");
	scanf(" %lf",&medium);
	printf("Enter the price for a LARGE shirt: $");
	scanf(" %lf",&large);
	printf("\n");
	
	
	printf("Shirt store prices list\n");
	printf("=======================\n");
	printf("SMALL  : $%.2f\n",small);
	printf("MEDIUM : $%.2f\n",medium);
	printf("LARGE  : $%.2f\n\n",large);
	
	
	
	printf("Patty's shirt size is 'S' \nNumber of shirts Patty is buying: ");
	scanf("%d", &qty);
	
	
	taxes = small * qty * tax * 100;
	sub_total = small * qty * 100;
	total = sub_total + taxes ;
	
	printf("\nPatty's shopping cart...");
	printf("\nContains : %d shirts\n", qty);
	printf("sub-Total: %.4lf\n", sub_total / 100.0);
	printf("Taxes    : %8.4lf\n", taxes /100.0 );
	printf("Total    : %.4f\n",total/ 100.0 );
	
	
	return 0;
}

