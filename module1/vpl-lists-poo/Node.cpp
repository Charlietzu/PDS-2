#include "Node.hpp"

Node::Node(int data, Node* next){
    this->setData(data);
    this->setNext(next);
}

void Node::setData(int value){
    this->_data = value;
}

void Node::setNext(Node *next){
    this->_next = next;
}

int Node::getData() const {
    return this->_data;
}

Node* Node::getNext() const{
    return this->_next;
}