#include<cstdio>
#include<algorithm>
int n,m;
bool c[30000];
int a[30000],b[30000];
bool cmp(int x,int y)
{
	return x>y;
}
using namespace std;
int main()
{	scanf("%d %d",&n,&m);
	if(n>m)
	{
		printf("you died!");
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&b[i]);
	}
	sort(a+1,a+1+n,cmp);
	sort(b+1,b+1+m,cmp);
	int sum=0;
//	for(int i=1;i<=n;i++)
//	{
//		printf("%d ",a[i]); 
//	}
//	printf("\n");
//	for(int i=1;i<=m;i++)
//	{
//		printf("%d ",b[i]); 
//	}
//	printf("\n");
	if(a[1]>b[1])
	{
		printf("you died!");
		return 0;
	}
	int p=m;
	for(int i=n;i>=1;i--)
	{
		for(int j=p;j>=1;j--)
		{
			if(b[j]>=a[i])
			{
				sum+=b[j];
				p--;
				break;	
			}
			p--;
		}
	}
	printf("%d",sum);
	return 0;
}
