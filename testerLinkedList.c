#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#define INIT_SIZE 10
#define RANGE 100
#define OFFSET 50
int main() {
    Node* top = makeNode(21);

    //adding a node
    for (int dex = 0; dex < INIT_SIZE; dex++) {
        addNode(&top, rand() % (RANGE + 1) + OFFSET);
    }
    addNode(&top, 21);

    puts("Printing the entire list");
    printLL(top);
//    puts("Printing list after deleting 21 found as the first node");
//    deleteAKey(&top, 21);
//    printLL(top);
//    puts("Printing list after deleting 21 found as the last node");
//    deleteAKey(&top, 21);
    deleteAllInstancesOfAKey(top, 21);
    printLL(top);
    return 0;
}
