//design a shopping cart system with classes for products , cart and user implement featurees like adding / removing items from the cart calculate the total cost 
#include <bits/stdc++.h>
using namespace std;
class user
{
    class products
    {
        int pid;
        int price;
        string pname;
        int qty;
    };
    class cart
    {
        products arr[10];
        int idx=0;
        int total_cost=0;
        public:
        void add_to_cart(product newpr)
        {
            arr[idx] = newpr;
            idx++;
        }
        int calculate_total_cost() 
        {
            int total_cost = 0;
            for (int i = 0; i < idx; i++) 
            {
                total_cost += arr[i].price * arr[i].qty;
            }
            return total_cost;
        }
        void remove_from_cart(int product_id) 
        {
        for (int i = 0; i < idx; i++) 
        {
            if (arr[i].product_id == product_id) 
            {
                for (int j = i; j < idx - 1; j++) 
                {
                    arr[j] = arr[j + 1];
                }
                idx--;
                break;
            }
        }
    }
    };
};

int main() {
    int n;
    cin >> n;
    return 0;
}