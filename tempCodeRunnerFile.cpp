#include<iostream>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<cmath>
#include<fstream>
#include<stdio.h>
#include<algorithm>
using namespace std;
long long  int n,m,i,a[111111],x=0,t=1;
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf("%d%d",&n,&m);
for(i=1;i<=m;i++)
{
	scanf("%d",&a[i]);
	if(a[i]>t){x+=a[i]-t;t=a[i];}
	else if(a[i]<t){x+=(n+1)-t+a[i]-1;t=a[i];}
}
printf("%I64d",x);
return 0;
}


