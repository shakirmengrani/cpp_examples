#include "iostream"
#include "headers/order.h"

Order::Order(order order){
    Order::_order = order;
}

void Order::order::addItem(Product::Data product, int qty, double discount){
    Order::order::items.push_back(Order::Item{product, qty, discount});
}


Order::order Order::get(){
    return Order::_order;
}
