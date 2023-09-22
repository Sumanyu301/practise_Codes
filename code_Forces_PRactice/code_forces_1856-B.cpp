#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    
    long long n;
    cin>>n;
    long long sum=0;
    int a=0;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        sum+=v[i];
        if(v[i]==1)a++;
    }
    if(sum>=a+n && n>1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    
}