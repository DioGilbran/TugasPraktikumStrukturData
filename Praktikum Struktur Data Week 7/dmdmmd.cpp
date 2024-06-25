#include <iostream>
using namespace std;

struct node
{
    string data;
    node *next;
};

node *head;
node *tail;

void init()
{
    head = NULL;
    tail = NULL;
}

bool isEmpty()
{
    return head == NULL;
}