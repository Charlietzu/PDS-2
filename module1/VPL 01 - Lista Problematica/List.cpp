#include "List.hpp"

List::List(){
	_size = 0;
	_head = NULL;
}

void List::insert(int value){
 	Node* novo = new Node();
	novo->_next = _head;
	novo->_value = value;
	_head = novo;
	_size++;
}

void List::clearList() {
    Node *atual, *aux;
    atual = _head;
    for (int i = 0; i < _size; i++) {
        aux = atual;
        atual = atual->_next;
        delete aux;
        if (atual == nullptr) {
            break;
        }
    }
}

void List::print(){
	Node *proximo = _head;
	if(_size > 0){
		while(proximo != nullptr){
			std::cout << proximo->_value << " ";
			proximo = proximo->_next;
		}
			std::cout << "\n";
	} else {
		std::cout << "-" << std::endl;
		return;
	}
}

int List::removeFirst(){
	Node* current = _head;
	
	if(_head == nullptr){
		return 0;
	}
	int valorRemovido = current->_value;
	_head = _head-> _next;
	delete current;
	_size--;
	return valorRemovido;
}

int List::indexOf(int value){
	if (_size > 0){
		Node* head = _head;
		int index = 0;
		while(head && head-> _value != value){
			index++;
			head = head-> _next;
		}
		if (head-> _value == value)
			return index; 
		return -1;
	}
	else{
		return -1;
	}
}

void List::remove(int value){
	if(_size == 0){
		return;
	}
	else if(_head->_value == value){
		removeFirst();
		return;
	}
	else{
		Node* previous = _head;
		Node* current = _head->_next;

		while(current != NULL) {
			if(current->_value == value) {
				break;
			}
			else {
				previous = current;
				current = current->_next;
			}
		}
		if(current == NULL) {
			return;
		}
		else {
			previous->_next = current->_next;
			delete current;
			_size--;
		}
	}
}