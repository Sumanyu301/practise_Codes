    // • You are given two arrays, both of given size N
    // The first array represents the price of commodities present in your cart, represented by the variable name price
    // • The second array represents the quantity of each commodity that you need, represented by the variable name quantity
    // • You have to find the total price of the commodities present in the cart
    // • For example, consider the value stored in N = 3, and the first array is price = [100,20,40], and the second array is quantity = [2,1,2]
    // • Then, the required cart total will be
    // Cart Total = (100 * 2 + 20 * 1 + 40 2) = (200+ 20 + 80) = 300
    // • Therefore, the required output will be 300
    // Input
    // • The first line of the input contains the value stored in N
    // • The next line contains N space separated integers denoting the values stored in the price array
    // • The next line contains N space separated integers denoting the values stored in quantity array
    // Output
    // • Print the total cart value, as shown in the problem statement
    // Sample Input 1
    // 3
    // 100 20 40
    // 2 1 2
    // Sample Output 1
    // 300
    #include <bits/stdc++.h>
    using namespace std;
    void sumofarr(int arr[], int brr[], int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (arr[i] * brr[i]);
        }
        cout << sum;
    }
    int main()
    {
        int n;
        cin >> n;
        int arr[n];
        int brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        sumofarr(arr, brr, n);
        return 0;
    }