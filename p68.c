#include<stdio.h>
void main()
{
	int a[10],i,j,n,c=0;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
			c++;
		}
		}
	}
	printf("%d",c);
}
