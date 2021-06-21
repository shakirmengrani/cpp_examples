#include "headers/product.h"
#include <iostream>

Product::products prods;

std::string Product::newProduct(std::string name, double price, double discount, int qty, std::string person_name)
{   
    std::string str = name;
    str.append(std::to_string(price));
    str.append(std::to_string(discount));
    str.append(std::to_string(qty));
    std::hash<std::string> h1;
    str = h1(str);
    prods[str] = Data{name, price, discount, qty};
    prods[str].person.setName(person_name);
    return str;
}

Product::Data Product::get(std::string id){
    return prods[id];
}