#include<stdio.h>
float totalbill(float price[], int n, int qty[]);
float main()
{
	int n;
	float price[100];
	int qty[100];
	printf("Enter the number of items: ");
	scanf("%d", &n);
	for(int i=0; i < n; i++)
	{
		printf("\nPrice of item %d: ", i+1);
		scanf("%f", &price[i]);
		printf("What's the quantity of item %d; ",i +1);
		scanf("%d", &qty[i]);
	}
	printf("\nThe total bill(including tax) is %.2f ", totalbill(price, n, qty));
	return 0;
}
float totalbill(float price[], int n, int qty[])
{
	float total=0;
	for(int i=0; i < n; i++)
	{
		float itemtotal = price[i] * qty[i];
		float gst = itemtotal * 5 /100;
		total += itemtotal + gst;
	}
	return total;
}
