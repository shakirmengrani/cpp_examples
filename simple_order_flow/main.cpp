#include <iostream>
#include "headers/product.h"
#include "headers/order.h"

using namespace std;

Product product;
string products[5];
void makeProducts()
{
    products[0] = product.newProduct("Test Product", 100.00, 10.00, 2, "Shakir");
    products[1] = product.newProduct("Test Product1", 100.00, 10.00, 2, "Shakir");
    products[2] = product.newProduct("Test Product2", 100.00, 10.00, 2, "Shakir");
    products[3] = product.newProduct("Test Product3", 100.00, 10.00, 2, "Shakir");
    products[4] = product.newProduct("Test Product4", 100.00, 10.00, 2, "Shakir");
}

void makeOrder()
{
    Order::order data;
    data.customer.setName("Shakir");
    for (size_t i = 0; i < sizeof(products) / sizeof(products[0]); i++)
    {
        data.addItem(product.get(products[i]), 1, 0);
    }
    Order order(data);
    cout << "Order Items: " << order.get().items.size() << endl;
}

int main()
{
    makeProducts();
    makeOrder();
    cout << "products: " << sizeof(products) / sizeof(products[0]) << endl;
    return 0;
}