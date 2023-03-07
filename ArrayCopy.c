#include<stdio.h>
void main()
{
	int a[10],b[10],i,n;
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		printf("enter the a[%d] element=",i);
		scanf("%d",&a[i]);
	}
	printf("array elements are\n");
	for(i=0;i<n;i++)
	{
		//printf("a[%d]=%d\n",i,a[i]);
		printf("%d ",a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("The Originalelements in an array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		
	}
	printf(" After copying The New elemnts in an array are:");
	for(i=0;i<n;i++)
	{
	   printf("%d ",b[i]);	
	}
	
	
}
