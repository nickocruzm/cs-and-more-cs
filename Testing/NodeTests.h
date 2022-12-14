#ifndef __NODETESTS_H__
#define __NODETESTS_H__

#include "../Node/Node.h"
#include "gtest/gtest.h"

TEST(NODE_CONSTRUCTOR_TEST, no_arguments){
    Node* n = new Node();

    EXPECT_EQ(n->getValue(),0);
    EXPECT_EQ(n->next,nullptr);
}

TEST(NODE_CONSTRUCTOR_TEST, 1_argument){
    Node* n = new Node(10);

    EXPECT_EQ(10,n->getValue());

};

TEST(NODE_CONSTRUCTOR_TEST, 2_arguments){
    Node* b = new Node(14);
    Node* a = new Node(22,b);

    EXPECT_EQ(a->next, b);
    EXPECT_EQ(a->getValue(),22);
    EXPECT_EQ(b->getValue(),14);
};


TEST(NODE_SETTERS, set_next){
    Node* a = new Node(1);
    Node* b = new Node(33);

    a->set("next",b);

    EXPECT_EQ(a->next, b);
    EXPECT_EQ(a->next->value, b->getValue());
};

TEST(NODE_SETTERS, set_prev){
    Node* prev = new Node(22);
    Node* node = new Node(32);

    node->set("prev",prev);

    EXPECT_EQ(node->prev, prev);
    EXPECT_EQ(node->prev->value, prev->value);
}


#endif