#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <map>
#include "person.h"

class Product
{
    public:
        struct Data
        {
            std::string Name;
            double Price;
            double Discount;
            int Qty;
            Person person;
        };
    typedef map<std::string, Data> products;
    std::string newProduct(std::string name, double price, double discount, int qty, string person_name);
    Data get(std::string id);
};

#endif