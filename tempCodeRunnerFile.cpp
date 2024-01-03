#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,big,small;
		int a =n;
	    cin>>n>>big>>small;
	    for(int i=0;i<n;i++)
			{
				if(small%3==0&&big>0)
				{
					small-=3;
					big--;
					a--;
				}
				else if(small%3!=0&&big>=2)
				{
					big-=2;
					a--;
				}
				else
				{
					;
				}
			}
			if(a<=0)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}

	}

}
