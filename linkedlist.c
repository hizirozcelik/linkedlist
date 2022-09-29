//
// Created by MM on 2022-06-14.
//
#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
NodePtr makeNode(int num){
    NodePtr ptr = malloc(sizeof(*ptr));
    ptr->data = num;
    ptr->next = NULL;
    return ptr;
}

void addNode(NodePtr* top, int dat){
    Node* ptr = malloc(sizeof(*ptr));
    ptr->data = dat;
    ptr->next = (*top);
    (*top) = ptr;
}
void printLL(Node* top){
    if ( top == NULL) {
        puts("Empty list");
        return;
    }
    while( top != NULL){
        printf("%d ", top->data);
        top = top->next;
    }
    puts("");
} // printLL ends


void deleteNode(NodePtr* start){
    Node* temp = (*start);
    (*start) = (*start)->next;
    free(temp);
}
void deleteAKey(NodePtr* start, int key){
    if ( *start == NULL){
        puts("Empty list");
        return;
    }

    NodePtr temp;
    if ( (*start)->data == key){ // if the top node holds the key
        temp = *start;
        *start = (*start)->next;
        free(temp);
        return;
    }
    NodePtr curr = *start, prev = NULL; // if the first node does not hold the key
    while (curr != NULL && curr->data != key ){ // As long as the end of the
        //list is not reached or the key is not found continue to traverse the list
        prev = curr;
        curr = curr->next;
    }
    if (curr == NULL){
        puts("Key not found");
        return;
    }
    prev->next = curr->next;
    free(curr);
}
float avg(NodePtr top){

    NodePtr curr = top, prev = NULL;
    int node1 = top->data;
    int node2 = 0;
    float avg;

    while (curr != NULL ){ // As long as the end of the
        //list is not reached or the key is not found continue to traverse the list
        prev = curr;
        curr = curr->next;
    }
    node2= prev->data;
    avg = (node1+node2)/2;
    return avg;
}
void deleteAllInstancesOfAKey(NodePtr* start, int key) {
    if (*start == NULL) {
        puts("Empty list");
        return;
    }
    NodePtr temp;
    while (*start != NULL && (*start)->data == key) { // if the top node holds the key
        temp = (*start);
        (*start) = (*start)->next;
        free(temp);
    }
    NodePtr curr = *start, prev = NULL; // if there are nodes holding data
    // other than the key value
    while (curr != NULL) { // As long as the end of the is not reached
        if (curr->data == key) {
            prev = curr;
            curr = curr->next;
        }
        if (curr == NULL) {
            puts("Key not found");
            return;
        }
        prev->next = curr->next;
        free(curr);
    }
}
void difference(NodePtr top1, NodePtr top2){
    if (top1 == NULL || top2 == NULL){
        puts("At least one of the lists is empty");
        return;
    }
    while(top1 != NULL && top2 != NULL){
        printf("%4d", top1->data - top2->data);
        top1 = top1->next;
        top2 = top2->next;
    }

}