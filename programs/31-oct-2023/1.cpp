#include <bits/stdc++.h>
using namespace std;
class box
{
    int l;
    int b;
    int h;
    public:
    box()
    {
        l=0;
        b=0;
        h=0;
    }
    box(int len,int bred,int height)
    {
        l=len;
        b=bred;
        h=height;
    }
    box (const box &obj1)
    {
        l=obj1.l;
        h=obj1.h;
        b=obj1.b;
    }
    int getlength()
    {
        return l;
    }
    int getbreadth()
    {
        return b;
    }    
    int getlength()
    {
        return h;
    }
    long long calculatevolume()
    {
        return(l*b*h);
    }
     bool operator<(const Box &other) 
     {
        if (l < other.l) 
        {
            return true;
        } 
        else if (l == other.l) 
        {
            if (b < other.b) 
            {
                return true;
            } else if (b == other.b) 
            {
                return h < other.h;
            }
        }
        return false;
    }


};
int main() {
    int n;
    cin >> n;
    return 0;
}