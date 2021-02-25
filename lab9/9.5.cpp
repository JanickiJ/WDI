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


void twolists(node*& head1, node* head2) {
    reverse(head1);
    reverse(head2);
    node* tmp1 = head1;
    node* prev1 = NULL;
    while (tmp1 != NULL && head2 != NULL) {
        tmp1->dana += head2->dana;
        prev1 = tmp1;
        tmp1 = tmp1->next;
        head2 = head2->next;
    }
    if (tmp1 == NULL) {
        prev1->next = head2;
    }

    tmp1 = head1;
    while (tmp1->next != NULL) {
        if (tmp1->dana > 9) {
            tmp1->dana -= 10;
            tmp1->next->dana += 1;
        }
        tmp1 = tmp1->next;
    }
    if (tmp1->dana > 9) {
        node* nowy = new node;
        tmp1->next = nowy;
        nowy->next = NULL;
        nowy->dana = 1;
        tmp1->dana -= 10;
    }
    reverse(head1);
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


    node* a1 = new node;
    node* b1 = new node;
    node* c1 = new node;
    node* d1 = new node;
    node* e1 = new node;

    a1->dana = 1;
    b1->dana = 2;
    c1->dana = 3;
    d1->dana = 4;
    e1->dana = 5;

    a1->next = b1;
    b1->next = c1;
    c1->next = d1;
    d1->next = e1;
    e1->next = NULL;

    printList(a);
    printList(a1);

    twolists(a, a1);
    printList(a);
}

