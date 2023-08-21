#include <iostream>
using namespace std;
struct book
{
  char title[20];
  int pages;
  float price;
};
int main ()
{
  struct book b1 = {"basic",345,275.50};
  cout<<b1.pages<<endl;
  cout<<b1.price<<endl;
  cout<<b1.title<<endl;
}