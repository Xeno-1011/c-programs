#include<stdio.h>
int findMax(int marks[], int n);
int main()
{
	int n;
	printf("\nEnter the number of students: ");
	scanf("%d", &n);
	int marks[n];
	for(int i=0; i < n; i++)
	{
		printf("\nEnter the marks of student %d: ", i+1);
		scanf("%d", &marks[i]);
	}
	printf("\nThe highest marks scored is: %d\n", findMax(marks, n));
	return 0;
}
int findMax(int marks[], int n)
{
	int max= 0;
	max= marks[0];
	for(int i=0; i < n; i++)
	{
		if(max < marks[i])
		{
			max=marks[i];
		}
	}
	return max;
}
