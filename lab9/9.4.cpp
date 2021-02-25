#include <iostream>
using namespace std;

struct node {
    int dana;
    node* next;
};

void reverse(node*& head) {
    node* tmp = head;
    while (tmp->next != NULL) {
        node* tmp1 = tmp->next;
        tmp->next = tmp1->next;
        tmp1->next = head;
        head = tmp1;
    }
}


void addOne(node*& head) {
    reverse(head);
    node* tmp = head;
    tmp->dana += 1;
    
    while (tmp->next != NULL) {
        if (tmp->dana == 10) {
            tmp->dana = 0;
            tmp->next->dana += 1;
        }
        tmp = tmp->next;

    }
    if (tmp->dana == 10) {
        tmp->dana = 0;
        node* nowy = new node;
        tmp->next = nowy;
        nowy->dana = 1;
        nowy->next = NULL;
    }

    reverse(head);
}

void printList(node* head) {
    while (head != NULL) {
        cout << head->dana << "  ";
        head = head->next;
    }
    cout << endl;
}


int main() {
    node* a = new node;
    node* b = new node;
    node* c = new node;
    node* d = new node;
    node* e = new node;

    a->dana = 9;
    b->dana = 9;
    c->dana = 9;
    d->dana = 9;
    e->dana = 9;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    printList(a);
    addOne(a);
    printList(a);
}

