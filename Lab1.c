// Include for printing information to the screen
#include <stdio.h>

const double SALE_PER_ITEM = 19.95;

int main(void)
{
	
	int itemsSoldMonday;
	int itemsSoldTuesday;
	int itemsSoldWednesday;
	int itemsSoldThursday;
	int itemsSoldFriday;
	
	int totalItemsSold;
	
	double totalSalesGenerated;
	
	//Print header to the screen
	printf("***********************************************\n");
	printf("[COLLEGE]\n");
	printf("Program written by: [NAME]\n");
	printf("Lab 1\n");
	printf("***********************************************\n");
	
	//Assign values to integers
	itemsSoldMonday = 23;
	itemsSoldTuesday = 18;
	itemsSoldWednesday = 7;
	itemsSoldThursday = 13;
	itemsSoldFriday = 25;
	
	//Calculate total items sold
	totalItemsSold = itemsSoldMonday + itemsSoldTuesday + itemsSoldWednesday + 
					itemsSoldThursday + itemsSoldFriday;
	
	//Calculate the total money generated from sales
	totalSalesGenerated = totalItemsSold * SALE_PER_ITEM;
	
	//Print items sold to the screen
	printf("Items sold on Monday: %d\n", itemsSoldMonday);
	printf("Items sold on Tuesday: %d\n", itemsSoldTuesday);
	printf("Items sold on Wednesday: %d\n", itemsSoldWednesday);
	printf("Items sold on Thursday: %d\n", itemsSoldThursday);
	printf("Items sold on Friday: %d\n", itemsSoldFriday);
	
	// Move cursor down an extra line
	printf("\n");
	
	//Print total items sold
	printf("Total items sold: %d\n", totalItemsSold);
	
	//Move cursor down an extra line
	printf("\n");
	
	//Print total sakes
	printf("Total Sales: $ %0.2lf\n", totalSalesGenerated);
	
	//Last line of code
	return 0;
}
