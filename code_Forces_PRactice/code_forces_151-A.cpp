#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,l,c,d,p,nl,np;
    cin >> n>>k>>l>>c>>d>>p>>nl>>np;
    int ovearall = k*l;
    int drinks_toast = ovearall/nl;
    int limes = c*d;
    int salt = p/np;
    
    int smallest = min(drinks_toast, min(limes, salt));
    cout<<smallest/n;
    return 0;
}