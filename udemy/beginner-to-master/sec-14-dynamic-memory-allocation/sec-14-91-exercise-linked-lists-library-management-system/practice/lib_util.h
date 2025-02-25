#ifndef LIB_UTIL_H_INCLUDED
#define LIB_UTIL_H_INCLUDED

struct node_t
{
    char title[200];
    char author[200];
    int totalCopies;
    int copiesInStorage;
    struct node_t* next;
};

typedef struct node_t node;

node* createNodeLL();
node* addNodeToHead(node* head, node* newNode);
void printAllInfo(node* head);
void printNumOfCopies(node* head);
void deleteNodeFromPosition(node* head, int position);
node* deleteBookFromDB(node* head);
void loanOutBook(node* head);
node* autoPopLib(node* head);
node* deleteHead(node* head);

#endif  // LIB_UTIL_H_INCLUDED