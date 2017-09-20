#include<stdio.h>

void main()
{
	int a[10],i,temp,n;
	printf("enter the number of elements in the array");
	scanf("%d",&n);
	printf("enter the elements in the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n/2);i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	printf("sorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	
}