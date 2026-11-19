#include<stdio.h>
int reverse(int a[], int n);
int main()
{
    int n;
    printf("\nTo reverse numbers\n");
    printf("First Enter the how many digit number you want to reverse:  ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i < n; i++){
	printf("\nEnter the %d digit of the number: ",i+1);
    	scanf("%d", &a[i]);
    }
    printf("\nReversed number is: %d\n", reverse(a,n));
    return 0;
}
int reverse(int a[], int n)
{
	int r=0;
	for(int i= n-1; i >= 0; i--)
	{
		r= r * 10 + a[i];
	}
	return r;
}
