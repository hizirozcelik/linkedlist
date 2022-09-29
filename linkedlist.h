//
// Created by gundloo on 2022-06-14.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H
typedef struct _nd {
    int data;
    struct _nd* next;
}Node, *NodePtr; // Node* <> NodePtr
NodePtr makeNode(int num);
void addNode(NodePtr* top, int data);
void printLL(Node* top);
void deleteNode(NodePtr* start);
void deleteAKey(NodePtr* start, int key);
float avg(NodePtr start);
void deleteAllInstancesOfAKey(NodePtr* start, int key);
void difference(NodePtr top1, NodePtr top2);
#endif //LINKEDLIST_LINKEDLIST_H
