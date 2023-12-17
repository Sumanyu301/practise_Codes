    #include <bits/stdc++.h>
    using namespace std;

    int main() 
    {
        int t;
        cin >> t;
        while(t--)
        {
            int a,b,big,small;
            cin>>a>>b;
            if(a%b==0)
            {
                cout<<0<<endl;
            }
            else
            {
                int count1 =0;
                int count2 =0;
                int a1 = a;
                int a2 = b;
                int a3 = a;
                int a4 = b;
                while(a1%a2!=0 &&a1>0 &&a2>0)
                {
                    a1--;
                    a2++;
                    count1++;
                }
                while(a3%a4!=0 && a3>0 && a4>0)
                {
                    a3++;
                    a4--;
                    count2++;
                }  
                if(count1<count2)
                cout<<count1<<endl;
                else
                cout<<count2<<endl;
            }
        
        }
        return 0;
    }