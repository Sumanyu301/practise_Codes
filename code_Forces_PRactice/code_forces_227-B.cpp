#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    long long int index[100001];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        index[a]=i;
    }
    int m,x;
    long long int v=0;
    long long int p=0;
    cin>>m;
    while(m--){
        cin>>x;
        v+=index[x];
        p+=(n-index[x]+1);
    }
    cout<<v<<" "<<p;
}