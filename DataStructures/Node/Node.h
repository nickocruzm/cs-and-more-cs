#ifndef __NODE_H__
#define __NODE_H__

#include<iostream>
#include<string>

using std::cout; using std::endl;
using std::string;


class Node{

    public:
        int value = 0;
        Node* prev = nullptr;
        Node* next = nullptr;

        // bool link_status = false;
        // bool double_linked = NULL;
        // bool single_linked = NULL;
        
        Node();
        Node(int value);
        Node(int value, Node* next);

        Node(int value, Node* prev, Node* next);

        int getValue();

        void set(string dir, Node* node);

        // bool getLinkStatus();
        
};



#endif