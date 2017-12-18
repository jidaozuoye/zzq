#include<stdio.h>
#include<math.h>
int main()
{
	while(1)
	{
	int a[101][101],i,j,n,b=0,c=1;
	printf("请输入魔方阵的阶级n(必须为奇数):  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	    for(j=1;j<=n;j++)
	    {
	    	if(i==1&&j==(n+1)/2) a[i][j]=1;
	    	else a[i][j]=0;
		}
	while(c<=n*n)
	{
		for(i=1;i<=n;i++)
		    for(j=1;j<=n;j++)
		    	if(a[i][j]==c)
		    	{
		    		if(i==1&&j!=n&&a[n][j+1]==0) a[n][j+1]=c+1;
		    	 	else if(i==1&&j==n&&a[n][1]==0) a[n][1]=c+1;
		    		else if(i!=1&&j==n&&a[i-1][1]==0) a[i-1][1]=c+1;
		    		else if(i!=1&&j!=n&&a[i-1][j+1]==0) a[i-1][j+1]=c+1;
		    		else a[i+1][j]=c+1;
				}
		c++;
	}
	for(i=1;i<=n;i++)
	    for(j=1;j<=n;j++,b++)
	    {
	    	if(b%n==0) printf("\n\n");
	    	printf("%7d",a[i][j]);
		}
	printf("\n\n\n\n");
	}
	return 0;
 } 
