#include "../Node/Node.h"
#include "../Linked_Lists/LinkedList.h"
#include <iostream>


int main(){
    Node* n2 = new Node(45);
    Node* n1 = new Node(34, n2);
    Node* n0 = new Node(10, n1);

    LinkedList linked_list(n0);


}