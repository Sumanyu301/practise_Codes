#include <bits/stdc++.h>
using namespace std;

class inventory {
    class category {
        string categoryName;

    public:
        void setCategoryName(const string& name) {
            categoryName = name;
        }

        const string& getCategoryName() const {
            return categoryName;
        }
    };

    class products {
        int id;
        string name;
        category c1;
        double price;

    public:
        void setID(int id1) {
            id = id1;
        }
        void setName(const string& str) {
            name = str;
        }
        void setPrice(double p) {
            price = p;
        }

        int getID() const {
            return id;
        }
        const string& getName() const {
            return name;
        }
        double getPrice() const {
            return price;
        }
    };
};

int main() {
    int n;
    cin >> n;
    return 0;
}
