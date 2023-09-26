#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,t,x,y,x1,y1;
	cin>>t;
	while(t--) 
    {
		cin>>n>>x1>>y1;
		for(int i=1;i<n;i++) 
        {
			cin>>x>>y;
			if(y>=y1&&x>=x1) 
            {
				x1=-1;
			}
		}
		cout<<x1<<endl;
	}
	return 0;
}