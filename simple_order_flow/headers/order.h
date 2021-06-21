#include "iostream"
#include "product.h"
#include "person.h"
#include "vector"
using namespace std;

class Order
{
public:
    struct Item
    {
        Product::Data product;
        int qty;
        double discount;
    };

    struct order
    {
        Person customer;
        string order_number;
        vector<Item> items;

        void addItem(Product::Data product, int qty, double discount);
    };

protected:
    order _order;

public:
    Order(order myorder);
    order get();
};