#include <iostream>
#include "transaction.h"

class Node
{
private:
    std::hash<std::string> hash;
    std::string makeHash(Transaction data);
    std::string prevHash;
    std::string currentHash;

public:
    Transaction data;
    Node *next;
    Node();
    void append(Node **head_ref, Transaction data);
    const std::string& getPrevHash();
    const std::string& getCurrentHash();
};
