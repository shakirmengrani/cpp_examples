#include <iostream>
#include "headers/node.h"

int main(){
    Transaction trx;
    Node* myNode = new Node();
    
    trx.recepient = "recepient 1";
    trx.receiver = "receiver 1";
    trx.amount = 120.00;
    myNode->append(&myNode, trx);
    
    trx.recepient = "recepient 2";
    trx.receiver = "receiver 2";
    trx.amount = 120.00;
    myNode->append(&myNode->next, trx);

    trx.recepient = "recepient 3";
    trx.receiver = "receiver 3";
    trx.amount = 120.00;
    myNode->append(&myNode->next, trx);

    trx.recepient = "recepient 4";
    trx.receiver = "receiver 4";
    trx.amount = 120.00;
    myNode->append(&myNode->next, trx);
    
    while (myNode != NULL)
    {
        std::cout << "prev hash: " << myNode->getPrevHash() << " current hash: " << myNode->getCurrentHash() << std::endl;
        std::cout << "Recepient: " << myNode->data.recepient << " Receiver: " << myNode->data.receiver << " Amount: " << myNode->data.amount << std::endl;
        myNode = myNode->next;
    }
    
    return 0;
}