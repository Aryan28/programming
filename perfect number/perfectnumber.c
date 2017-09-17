#include<stdio.h>


int main(){
  int n,i, sum,count=0;

  for(n=2;n<=1000000;n++)
  {
    i=1;
    sum=0;
    while((i*i)<=n)
    {
        if(n%i==0 && i!=1)
             sum=sum+i+(n/i);
            i++;
    }
    if((sum+1)==n)
    {
      count=count+1;
      printf("perfect number: \n%d\n",n);
    }    
    else
      ;
    
  }
  printf("count: %d\n",count);
  return 0;
}