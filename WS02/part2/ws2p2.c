/*
Toonies		-> iki dolar değerinde madeni para
Loonies		-> 1 kanada doları
Quarters	-> çeyrekler
Dimes		-> 10 sent
Nickels		-> beş sentlik para
Pennies		-> paraya benzeyen

 
   (float)sub_totalP = small * buyingP;
	sub_totalS = medium * buyingS;
	sub_totalT = large * buyingT;
 */

#include <stdio.h>

int main(int argc, char **argv)
{	
	const double tax = 0.13;
	
	char size_patty = 'S', size_sally = 'M', size_tommy = 'L';
	double small, medium, large;
	int tax_patty, tax_sally, tax_tommy;
	int qty_patty ,qty_tommy ,qty_sally;
	int sub_total_patty, sub_total_tommy, sub_total_sally;
	int total_patty, total_tommy, total_sally;
	int giro_sub, giro_total, giro_tax;
	int balance;
	int coins;
	
	

	
	
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
	printf("SMALL  : $%.2lf\n",small);
	printf("MEDIUM : $%.2lf\n",medium);
	printf("LARGE  : $%.2lf\n\n",large);
	
	printf("Patty's shirt size is 'S' \nNumber of shirts Patty is buying: ");
	scanf("%d", &qty_patty);
	putchar('\n');
	printf("Tommy's shirt size is 'L' \nNumber of shirts Tommy is buying: ");
	scanf("%d", &qty_tommy);
	putchar('\n');
	printf("Sally's shirt size is 'M' \nNumber of shirts Sally is buying: ");
	scanf("%d", &qty_sally);
	
	
	sub_total_patty = qty_patty * small * 100 + 0.5;
	sub_total_sally = qty_sally * medium * 100 + 0.5;
	sub_total_tommy = qty_tommy * large * 100 + 0.5;
	
	
	tax_patty = tax * small * qty_patty * 100 + 0.5;
	tax_sally = (tax * medium * qty_sally) * 100 + 0.5;
	tax_tommy = tax * large * qty_tommy * 100 + 0.5;
	
	total_patty = sub_total_patty + tax_patty;
	total_sally = sub_total_sally + tax_sally;
	total_tommy = sub_total_tommy + tax_tommy;	
	
	giro_sub = sub_total_patty+sub_total_tommy+sub_total_sally;
	giro_total = total_patty+total_sally+total_tommy;
	giro_tax = tax_patty + tax_sally + tax_tommy;
	
	putchar('\n');
	puts("Customer Size Price Qty Sub-Total \tTax\tTotal");
	puts("-------- ---- ----- --- --------- --------- ---------");
	printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf \n",size_patty,small, qty_patty,
														     	  sub_total_patty / 100.0,
															      tax_patty / 100.0,
															      total_patty / 100.0);
																	
	printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",size_sally, medium, qty_sally,
																	sub_total_sally / 100.0,
																	tax_sally / 100.0,
																	total_sally / 100.0);
	
	printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",size_tommy, large, qty_tommy,
																	sub_total_tommy / 100.0,
																	tax_tommy / 100.0,
																	total_tommy / 100.0);
	
	puts("-------- ---- ----- --- --------- --------- ---------");
	printf("%33.4lf %9.4lf %9.4lf\n\n", giro_sub /100.0,
										giro_tax / 100.0,
										giro_total / 100.0);
	
	puts("Daily retail sales represented by coins");
	puts("=======================================");
	puts("Sales EXCLUDING tax");
	puts("Coin     Qty   Balance");
	puts("-------- --- ---------");
	printf("%22.4lf\n", giro_sub /100.0);
	
	coins = (giro_sub/100.0)/2.0;
	balance =((giro_sub/100.0) - (coins*2.0))*100; 
	printf("Toonies %3d %9.4lf\n",coins, balance/100.0);
	
	coins = balance/100.0/1.0;
	balance = ((balance/100.0)-(coins*1.0))*100;
	printf("Loonies %3d %9.4lf\n",coins, balance/100.0);
	
	coins = balance/100.0/0.25;
	balance = balance - coins * 0.25*100;
	printf("Quarters%3d %9.4lf\n",coins, balance/100.0);
	
	coins = balance/100.0/0.10;
	balance = balance - coins*0.10*100;
	printf("Dimes  %3d %9.4lf\n",coins, balance/100.0);
	
	coins = balance/100.0/0.05;
	balance = balance -coins*0.05*100;
	printf("Nickels %3d %9.4lf\n",coins, balance/100.0);
	
	coins = (balance/100);
	balance = balance-coins*0.01*100;
	printf("%d Pennies %3d %9.4lf\n",balance,coins, balance/100.0);
	
	printf("Average cost/shirt: $");
	
	puts("Sales INCLUDING tax");
	puts("Coin     Qty   Balance");
	puts("-------- --- ---------");
	
	printf("%22.4lf\n", giro_total /100.0);
	
	coins = (giro_total/100.0)/2.0;
	balance =((giro_total/100.0) - (coins*2.0))*100; 
	printf("Toonies %3d %9.4lf\n",coins, balance/100.0);
	
	coins = balance/100.0/1.0;
	balance = ((balance/100.0)-(coins*1.0))*100;
	printf("Loonies %3d %9.4lf\n",coins, balance/100.0);
	
	coins = balance/100.0/0.25;
	balance = balance - coins * 0.25*100;
	printf("Quarters%3d %9.4lf\n",coins, balance/100.0);
	
	coins = balance/100.0/0.10;
	balance = balance - coins*0.10*100;
	printf("Dimes  %3d %9.4lf\n",coins, balance/100.0);
	
	coins = balance/100.0/0.05;
	balance = balance -coins*0.05*100;
	printf("Nickels %3d %9.4lf\n",coins, balance/100.0);
	
	coins = (balance/100);
	balance = balance-coins*0.01*100;
	printf("%d Pennies %3d %9.4lf\n",balance,coins, balance/100.0);
	return 0;
}

