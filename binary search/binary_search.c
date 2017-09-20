#include<stdio.h>
#include<stdlib.h>

int iteration(int n)
{
	int power_of_two=0;
	while(n>1)
	{
		n=n/2;
		power_of_two=power_of_two+1;
	}
	printf("the power value is %d in the fn.", power_of_two);
	return power_of_two;
}
void main()
{
	int a[9]={3,4,7,11,13,14,23,29,30};
	int n=9,value,i=1,powerval=0,startval=0,pos,endval=9,temp,found=0;
	powerval=iteration(n);
	pos=n/2;
	printf("enter the value to be found:\n");
	scanf("%d",&value);
	while(i<=powerval){
		
		if(a[pos]== value)
		{
			printf("the value is at %d",pos+1);
			found=1;
			exit(0);
		}
		else if (a[pos]>value)
		{
			temp=pos;
			pos=startval+(pos-startval)/2;
			endval=temp;
		}
		else
		{
			startval=pos;
			pos=pos+(endval-pos)/2;
			
		}
		
		i++;

	}
	printf("-1");
}