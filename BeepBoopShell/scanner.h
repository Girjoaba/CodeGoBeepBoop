#ifndef SCANNER_H
#define SCANNER_H

#define INITIAL_STRING_SIZE 10

typedef struct ListNode *List;

typedef struct ListNode {
    char *t;
    List next;
} ListNode;


char *readInputLine(int *exitFlag);

List getTokenList(char *s);

bool isEmpty(List l);

void printList(List l);

void freeTokenList(List l);

#endif
