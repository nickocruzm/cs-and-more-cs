#include "LinkedList.h"

LinkedList::LinkedList(Node* head){
    this->head = head;
}

// Don't pass tail node in
void LinkedList::delete_Node(Node* n){
    n->value = n->next->value;
    n->next = n->next->next;
}

void LinkedList::append(Node* n){
    
    Node* iter = this->head;

    while(iter){
        if(iter->next == nullptr){
            iter->next = n;
            this->List_size = this->List_size + 1;
            return;
        }
        iter = iter->next;
    }
}

void LinkedList::insert(int index, Node* node){
    Node* iter = this->head;
    Node* pushed_node = iter->next;
    int i = 0;

    while(iter){
        if(i == index - 1){
            iter->next = node;
            node->next = iter->next->next;
        }
    }
}