#include <iostream>
using namespace std;

struct node {
    int dana;
    node* next;
};



void trans(node*& head, node* head1, node* head2) {
    if (head1 == NULL) {
        head = head2;
        return;
    }
    if (head2 == NULL) {
        head = head1;
        return;
    }
    node* wartownik = new node;
    wartownik->next = head;
    head = wartownik;
    

    while (head1 != NULL && head2 != NULL) {
        if (head1->dana > head2->dana) {
            head->next = head2;
            head2 = head2->next;
        }
        else {
            head->next = head1;
            head1 = head1->next;
        }
        head = head->next;
    }
    if (head2 == NULL) {
        head->next = head1;
    }
    else if (head1 == NULL) {
        head->next = head2;
    }
    head = wartownik->next;
    delete wartownik;
}

node* rekuscalanie(node* head1, node* head2) {
    if (head1 == NULL) {
        return head2;
    }
    if (head2 == NULL) {
        return head1;
    }
    node* result;
    if (head1->dana > head2->dana) {
        result = head2;
        head2 = head2->next;
    }
    else {
        result = head1;
        head1 = head1->next;
    }
    result->next = rekuscalanie(head1, head2);
    return result;
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

    node* a1 = new node;
    node* b1 = new node;
    node* c1 = new node;
    node* d1 = new node;
    node* e1 = new node;
    node* f = new node;

    a->dana = 1;
    b->dana = 3;
    c->dana = 5;
    d->dana = 5;
    e->dana = 9;
    f->dana = 14;

    a1->dana = 2;
    b1->dana = 5;
    c1->dana = 5;
    d1->dana = 5;
    e1->dana = 11;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = NULL;

    a1->next = b1;
    b1->next = c1;
    c1->next = d1;
    d1->next = e1;
    e1->next = NULL;

    node* head = new node;
    head->next = NULL;

    printList(a);
    printList(a1);
    head=rekuscalanie(a,a1);
    printList(head);
}

