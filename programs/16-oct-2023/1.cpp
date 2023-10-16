// create a system to manage a librarys catalogue u should have classes for books u can add authors and the catalog itself implement meathods for checking out and returning books searching for books by title or authors 
#include <bits/stdc++.h>
using namespace std;
class catalogue
{
    int id[10];
    string name[10];
    string author[10];
    int quantity[10];

   
};

int main() {
    books b1;
    cout<<"no. of books";
    cin >> b1.bk;
    int n;
    n = b1.bk;
    for(int i=0;i<n;i++)
    {
        getline(cin,b1.author[i]);
        getline(cin,b1.title[i]);
    }
    return 0;
}