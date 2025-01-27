#include<stdio.h>

int main()
{
	int n[5],i,max;
	printf("Enter Five NO:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
		if(i==0)
			max=n[0];
		if(n[i]>max)
			max=n[i];
		
	}
	printf("\n Largest No: %d",max);
	return 0;
}
