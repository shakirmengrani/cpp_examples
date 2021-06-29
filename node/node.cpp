#include "headers/node.h"

Node::Node()
{
    Transaction trx;
    Node::currentHash = Node::makeHash(trx);
}

std::string Node::makeHash(Transaction data)
{
    std::string stringHash;
    time_t sec;
    stringHash.append(std::to_string(time(&sec)));
    stringHash.append(data.recepient);
    stringHash.append(data.receiver);
    stringHash.append(std::to_string(data.amount));
    stringHash.append(Node::prevHash);
    size_t s = Node::hash(stringHash);
    return std::to_string(s);
}

const std::string &Node::getPrevHash()
{
    return Node::prevHash;
}

const std::string &Node::getCurrentHash()
{
    return Node::currentHash;
}

void Node::append(Node **head_ref, Transaction data)
{
    Node *newNode = new Node();
    Node *last = *head_ref;
    newNode->data = data;
    newNode->currentHash = Node::makeHash(data);
    newNode->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = newNode;
    }
    else
    {
        while (last->next != NULL)
        {
            last = last->next;
        }
        newNode->prevHash = last->currentHash;
        last->next = newNode;
    }
}