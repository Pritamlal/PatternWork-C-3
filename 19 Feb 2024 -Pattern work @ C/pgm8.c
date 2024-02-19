#include<stdio.h>
int main()
{
	int i,n,j,s;
	printf("Enter teh number::");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(s=n;s>=i;s--)
		printf("  ");
		for(j=1;j<=i;j++)
		printf("%d ",j);
		printf("\n");
	}
	printf("\n");
}
