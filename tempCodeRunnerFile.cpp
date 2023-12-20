#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int res = 0;
	int x =n;
	int k=0;
	int a =n/2;
	while(a--)
	{
		for(int i=0;i<x;i++)
			{
				if(arr[i]==0)
				{
					if(arr[i]+arr[i+1]==1)
					{
						res+=1;
						for(int j=i;j<x-2;j++)
						{
							arr[j]=arr[j+2];
							x-=2;
						}
						x-=2;
						break;
					}
					else if(arr[i-1]+arr[i]==1)
					{
						res+=1;
						for(int j=i-1;j<x-2;j++)
						{
							arr[j]=arr[j+2];
							k=1;
						}
						x-=2;
						break;
					}
					else
					{
						;
					}
				}
			}
			if(k==0)
			{
				res+=0;
				for(int j=0;j<x-2;j++)
					{
						arr[j]=arr[j+2];
					}
					x-=2;
			}
	}
	cout<<res<<endl;

	}
	
	return 0;
}