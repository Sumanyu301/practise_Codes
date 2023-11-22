//there are n  rings, and each ring is either red, green or blue, the rings are distributed among 10 rods labelled from 0 to , you are given a string a rings of length 2nthat describes the n rings that are placed onto the rods every two characters in rings form a colour position pair that is used to describe each ring where the first character of the ith pair denotes the ith ring denotes first character, the second character denotes the rod that the ith ring is placed on reutrn the number of rods that has all 3 colours of rings on them

    #include <bits/stdc++.h>
    using namespace std;
    
    int main()
    {
       int n;
       cin>>n;
       for(int i=0; i<n; i++)
       {
        string s;
        cin>>s;
        int count=0;
        for(int j=0; j<s.length(); j++)
        {
            if(s[j]=='R')
            {
                count++;
            }
        }
        cout<<count<<endl;
       }
    }
