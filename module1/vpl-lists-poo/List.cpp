#include "List.hpp"
#include <iostream>

List::List(){
	this->head = NULL;
	this->count = 0;
}

void List::insert(int value){
    this->head = new Node(value, this->head);
    this->count++;
}

int List::remove(){
    if(this->isEmpty()){
        return -1;
    } else {
        Node *nodeToDelete = this->head; //Salvando elemento a ser deletado em variável auxiliar
        this->head = this->head->getNext(); //Fazendo o segundo elemento passar a ser o primeiro

        int valueDeleted = nodeToDelete->getData(); //Salvando o valor a ser retornado pela função em variável auxiliar
        
        //Procedimento padrão da função, remover, reduzir tamanho, retornar valor removido
        delete nodeToDelete;
        this->count--;
        return valueDeleted;
    }
}

bool List::isEmpty(){
    if(this->count <= 0){
        return true;
    } else {
        return false;
    }
}

unsigned List::size() const {
    return this->count;
}

int List::middle() const {
    int middlePos = 0; //Variável que define a posição do meio
    Node *middleNode = this->head; //Nó a ser iterado

    if(this->count % 2 == 0){
        middlePos = this->count / 2; //Invertendo a função 2N = Tamanho -> N = Tamanho / 2
    } else {
        middlePos = (this->count - 1)/2; //Invertendo a função 2N + 1 = Tamanho -> N = (Tamanho - 1) / 2
    }

    for(int i = 0; i < middlePos; i++){
        middleNode = middleNode->getNext();
    }

    return middleNode->getData();
}

int List::last() const {
    Node *lastNode = this->head;
    for(int i = 0; i < this->count - 1; i++){ //Iteração até o último elemento da lista
        lastNode = lastNode->getNext();
    }
 
    return lastNode->getData();
}

void List::rotate() {
    Node *iterationNode = this->head;
    Node *headAux = this->head;
    this->head = this->head->getNext();

    while(iterationNode->getNext() != NULL){
        iterationNode = iterationNode->getNext();
    }
    iterationNode->setNext(headAux);
    headAux->setNext(NULL);

}

List::~List(){
    Node *nodeAux = this->head;
    for(int i = 0; i < this->count; i++){
       delete nodeAux;
       nodeAux = this->head = this->head->getNext();
       if(nodeAux == NULL){
           break;
       }
    }
}
